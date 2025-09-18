@class WKDOMRange;

@interface WKDOMTextIterator : NSObject {
    struct unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>> { struct __compressed_pair<WebCore::TextIterator *, std::default_delete<WebCore::TextIterator>> { struct TextIterator *__value_; } __ptr_; } _textIterator;
    struct Vector<unsigned short, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { unsigned short *m_buffer; unsigned int m_capacity; unsigned int m_size; } _upconvertedText;
}

@property (readonly) BOOL atEnd;
@property (readonly) WKDOMRange *currentRange;
@property (readonly) unsigned long long currentTextLength;
@property (readonly) const unsigned short *currentTextPointer;

+ (id)dd_iteratorForDocument:(id)a0;

- (BOOL)dd_checkCurrentRangeAgainstString:(struct __CFString { } *)a0;
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryFragment *x1; long long x2; long long x3; void /* function */ *x4; void *x5; } *)a0 forResults:(id)a1;
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryFragment *x1; long long x2; long long x3; void /* function */ *x4; void *x5; } *)a0 forResults:(id)a1 referenceDate:(id)a2 document:(id)a3 DOMWasModified:(BOOL *)a4 relevantResults:(id *)a5 knownHighlights:(id)a6 URLificationBlock:(id /* block */)a7;
- (struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryFragment *x1; long long x2; long long x3; void /* function */ *x4; void *x5; } *)dd_newQueryStopRange:(id *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithRange:(id)a0;
- (void)advance;

@end
