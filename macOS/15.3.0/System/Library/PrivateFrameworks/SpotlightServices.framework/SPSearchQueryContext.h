@class NSDate, NSString, NSArray, CSSuggestion, SSQueryIntent, NSDictionary, CSAttributeEvaluator, SPQUParse;

@interface SPSearchQueryContext : NSObject <NSCopying> {
    CSAttributeEvaluator *_evaluator;
    CSAttributeEvaluator *_evaluatorForPersonMatching;
}

@property (retain, nonatomic) NSString *searchString;
@property (readonly, nonatomic) NSString *normalizedSearchString;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (readonly, getter=getTrimmedSearchString) NSString *trimmedSearchString;
@property (readonly, nonatomic) BOOL hasMarkedText;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (retain, nonatomic) NSString *keyboardPrimaryLanguage;
@property (retain, nonatomic) NSArray *searchDomains;
@property (retain, nonatomic) NSArray *disabledDomains;
@property (retain, nonatomic) NSArray *disabledBundles;
@property (retain, nonatomic) NSArray *groupingRules;
@property (retain, nonatomic) NSArray *answerAttributes;
@property (retain, nonatomic) NSDate *referenceDate;
@property (nonatomic) BOOL forceQueryEvenIfSame;
@property (nonatomic) unsigned long long whyQuery;
@property (nonatomic) unsigned long long queryKind;
@property (nonatomic) unsigned long long whyClear;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic) double currentTime;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL allowInternet;
@property (nonatomic) BOOL noTokenize;
@property (nonatomic) BOOL internalDebug;
@property (nonatomic) BOOL internalValidation;
@property (nonatomic) BOOL disableOCR;
@property (nonatomic) BOOL isAdvancedSyntax;
@property (nonatomic) BOOL fetchL2Signals;
@property (retain, nonatomic) NSArray *searchEntities;
@property (retain, nonatomic) CSSuggestion *backingSearchModel;
@property (copy, nonatomic) NSDictionary *queryUnderstandingOutput;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL enablePersonalAnswers;
@property (nonatomic) BOOL retainBackendData;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *filterQueries;
@property (retain, nonatomic) SPQUParse *spQUParse;
@property (nonatomic) int source;
@property (retain, nonatomic) SSQueryIntent *queryIntent;
@property (retain, nonatomic) NSString *clientBundleID;
@property (nonatomic) int intentFromQU;
@property (retain, nonatomic) NSString *parsedQueryFromQU;
@property (nonatomic) BOOL earliestTokenFromQU;
@property (nonatomic) BOOL latestTokenFromQU;
@property (retain, nonatomic) NSString *departureLocationFromQU;
@property (retain, nonatomic) NSString *arrivalLocationFromQU;
@property (nonatomic) BOOL isAppEntitySearch;
@property (nonatomic) BOOL isFlightEventSearch;
@property (nonatomic) BOOL isHotelEventSearch;
@property (nonatomic) BOOL isRestaurantEventSearch;
@property (nonatomic) BOOL isEventSearch;
@property (nonatomic) float entityL1Score;
@property (nonatomic) unsigned long long llmQUIntentType;
@property (nonatomic) unsigned long long inferredLlmQUIntentType;
@property (nonatomic) BOOL isFromLLMQUParse;
@property (nonatomic) BOOL isSingle;
@property (nonatomic) BOOL isPlural;
@property (nonatomic) BOOL hasQueryTextEmbedding;
@property (nonatomic) BOOL hasSearchTerm;
@property (nonatomic) BOOL isLLMQUIntentEventSearch;

+ (id)getAppEntityParams:(id)a0;
+ (id)llmQUIntentString:(unsigned long long)a0;
+ (id)normalizeSearchString:(id)a0 queryContext:(id)a1;
+ (id)queryContextWithSearchString:(id)a0;
+ (id)removeAppEntitySpecificStopwords:(id)a0 withEntityTypeIdentifier:(id)a1 bundleID:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)evaluator;
- (id)displayedText;
- (id)initWithSearchString:(id)a0;
- (id)evaluatorForPersonMatching;
- (id)evaluatorWithSearchString:(id)a0;
- (void)incrementQueryId;
- (id)initWithSearchString:(id)a0 currentTime:(double)a1;

@end
