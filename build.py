#!/usr/bin/env python3
"""
Header HTML Builder

Usage:
    python3 header_html_builder.py <root_dir>

- Scans <root_dir> recursively for header files (.h, .hpp, .hh, .hxx)
- Creates ./build folder (relative to current working directory)
- Recreates directory structure of <root_dir> inside ./build
- For each directory with headers, generates:
    - one index.html listing all headers in that directory (with sidebar)
    - per-header HTML pages, each with the same sidebar
"""

import os
import sys
from pathlib import Path
import html
from collections import defaultdict

HEADER_EXTS = {".h", ".hpp", ".hh", ".hxx"}

def collect_headers(root: Path):
    """Dict mapping directories → list of (filename, absolute_path, relpath)."""
    dirs = defaultdict(list)
    for path in root.rglob("*"):
        if path.is_file() and path.suffix.lower() in HEADER_EXTS:
            rel = path.relative_to(root)
            dirs[rel.parent].append((path.stem, path, rel))
    return dirs

def escape_html(text: str) -> str:
    return html.escape(text)

def generate_sidebar(headers_by_dir: dict[Path, list[tuple[str, Path, Path]]], current_dir: Path = Path()) -> str:
    """
    Nested sidebar HTML for a directory and its subdirectories.
    """
    items = []
    for path in sorted(headers_by_dir.keys()):
        if path.parent != current_dir:
            continue
        sub_items = []
        # headers in this directory
        for stem, _, rel in sorted(headers_by_dir[path], key=lambda x: x[2].name.lower()):
            sub_items.append(f'<li>📄 <a href="{stem}.html">{html.escape(rel.name)}</a></li>')
        # subdirectories
        nested = generate_sidebar(headers_by_dir, current_dir=path)
        if nested:
            sub_items.append(nested)
        if sub_items:
            items.append(f'<li>📁 {html.escape(path.name) if path.name else "/"}<ul>{"".join(sub_items)}</ul></li>')
    return "".join(items)

def generate_breadcrumbs(current_relpath: Path, is_index: bool = False) -> str:
    """
    Generate clickable breadcrumbs for the current path.
    Returns HTML string with links to each parent directory's index.html.
    If is_index is True, the last directory crumb is plain text.
    For header pages (is_index=False), the last path component is always non-clickable.
    """
    if current_relpath == Path():
        return '<a href="./">Home</a>' if not is_index else 'Home'
    
    parts = current_relpath.parts
    crumbs = []
    root_link = '../' * len(parts)
    crumbs.append(f'<a href="{root_link}">Home</a>')
    for i, part in enumerate(parts):
        up_levels = len(parts) - i - 1
        rel_path = '../' * up_levels
        if (is_index and i == len(parts) - 1) or (not is_index and i == len(parts) - 1):
            crumbs.append(html.escape(part))
        else:
            crumbs.append(f'<a href="{rel_path}">{html.escape(part)}</a>')
    return ' / '.join(crumbs)

def page_html(title: str, sidebar: str, code: str = None, breadcrumbs: str = "") -> str:
    title_escaped = html.escape(title)
    title_display = f"{html.escape(title.split('/')[-1])}" if code else ""
    
    body_content = (
        f"<div class='breadcrumbs'>{breadcrumbs}</div>\n<h2>{title_display}</h2><pre><code class='language-objectivec'>{code}</code></pre>"
        if code else
        f"<div class='breadcrumbs'>{breadcrumbs}</div><p>Select a header from the sidebar</p>"
    )

    if code:
        current_dir = title.split('/')
        dir_display = current_dir[-2] if len(current_dir) >= 2 else (current_dir[-1] or "Root")
    else:
        dir_display = title.split('/')[-1] or "Root"
    
    return f"""<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8"/>
    <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
    <title>{title_display}</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.8.0/styles/atom-one-light.min.css">
    <script src="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.8.0/highlight.min.js"></script>
    <style>
        body {{
            display: flex;
            margin: 0;
            height: 100vh;
        }}
        #sidebar {{
            width: 320px;
            overflow-y: auto;
            padding: 1em;
            box-sizing: border-box;
            background: #fafafa;
            border-right: 1px solid #ccc;
        }}
        #sidebar h2 {{
            margin-top: 0;
            font-size: 1.2em;
            padding-bottom: 0.3em;
        }}
        #sidebar ul {{
            padding-left: 0;
        }}
        #sidebar li {{
            list-style: none;
            margin: 0.3em 0;
            word-wrap: break-word;
            overflow-wrap: break-word;
        }}
        #content {{
            flex: 1;
            overflow: auto;
            padding: 1em;
        }}
        h3 {{
            margin-top: 0;
            word-break: break-word;
            max-width: 100%;
            display: inline-block;
        }}
        h3 a {{
            text-decoration: none;
        }}
        h3 a:hover {{
            text-decoration: underline;
        }}
        pre {{
            background: transparent;
            overflow-x: auto;
            white-space: pre-wrap;
        }}
        .breadcrumbs {{
            font-size: 0.9em;
            margin-bottom: 1em;
        }}
        .breadcrumbs a {{
            text-decoration: none;
        }}
        .breadcrumbs a:hover {{
            text-decoration: underline;
        }}
        #searchBox {{
            width: 100%;
            padding: 0.6em;
            margin-bottom: 1em;
            border-radius: 4px;
            border: 1px solid #ddd;
            font-size: 0.9em;
            box-shadow: inset 0 1px 3px rgba(0,0,0,0.1);
            transition: border-color 0.2s, box-shadow 0.2s;
            outline: none;
            box-sizing: border-box;
        }}
        #searchBox:focus {{
            border-color: #2196F3;
            box-shadow: inset 0 1px 3px rgba(0,0,0,0.1), 0 0 5px rgba(33,150,243,0.3);
        }}
        ul ul {{
            margin-left: 1em;
            border-left: 1px dashed #555;
            padding-left: 0.5em;
        }}
        .hljs {{
            background: #f3f3f3;
        }}
    </style>
</head>
<body>
    <div id="sidebar">
        <h2>{html.escape(dir_display)}</h2>
        <input type="text" id="searchBox" placeholder="Search headers...">
        <ul id="headerList">
        {sidebar}
        </ul>
    </div>
    <div id="content">
        {body_content}
    </div>
    <script>
    hljs.highlightAll();
    const searchBox = document.getElementById('searchBox');
    const headerList = document.getElementById('headerList');
    searchBox.addEventListener('input', function() {{
        const filter = this.value.toLowerCase();
        for (let li of headerList.getElementsByTagName('li')) {{
            const text = li.textContent.toLowerCase();
            li.style.display = text.includes(filter) ? '' : 'none';
        }}
    }});
    </script>
</body>
</html>
"""

def build(root_dir: Path):
    headers_by_dir = collect_headers(root_dir)
    if not headers_by_dir:
        print("No header files found")
        return

    output_dir = Path("build")
    output_dir.mkdir(parents=True, exist_ok=True)

    for rel_dir, headers in headers_by_dir.items():
        out_dir = output_dir / rel_dir
        out_dir.mkdir(parents=True, exist_ok=True)

        sidebar_links = "\n".join(
            f'<li><a href="{stem}.html">{html.escape(fname)}</a></li>'
            for stem, _, rel in sorted(headers, key=lambda x: str(x[2]))
            for fname in [str(rel.name)]
        )

        # Directory index page
        breadcrumbs = generate_breadcrumbs(rel_dir, is_index=True)
        dir_index = page_html(str(rel_dir) or "/", sidebar_links, code=None, breadcrumbs=breadcrumbs)
        (out_dir / "index.html").write_text(dir_index, encoding="utf-8")

        # Per-header pages
        for stem, abspath, rel in headers:
            try:
                text = abspath.read_text(encoding="utf-8", errors="replace")
            except Exception:
                text = ""
            escaped = escape_html(text)
            breadcrumbs = generate_breadcrumbs(rel.parent, is_index=False)
            file_page = page_html(str(rel), sidebar_links, code=escaped, breadcrumbs=breadcrumbs)
            (out_dir / f"{stem}.html").write_text(file_page, encoding="utf-8")

    total_headers = sum(len(v) for v in headers_by_dir.values())
    print(f"Built HTML docs in ./build for {total_headers} headers")

def main():
    if len(sys.argv) < 2:
        print("Usage: python3 header_html_builder.py <root_dir>")
        sys.exit(1)

    root_dir = Path(sys.argv[1]).resolve()
    if not root_dir.is_dir():
        print("Error: root_dir must be a directory")
        sys.exit(1)

    build(root_dir)

if __name__ == "__main__":
    main()
