@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback : SFFeedback

@property (copy, nonatomic) id /* block */ VI_searchSuggestionFactory;
@property (retain, nonatomic) SFSearchSuggestion *suggestion;

+ (BOOL)supportsSecureCoding;

- (id)VI_searchSuggestionForSuggestionType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestion:(id)a0;

@end
