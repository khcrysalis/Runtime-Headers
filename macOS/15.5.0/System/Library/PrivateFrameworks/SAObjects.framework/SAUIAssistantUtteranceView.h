@class NSString, NSNumber;

@interface SAUIAssistantUtteranceView : SAAceView

@property (copy, nonatomic) NSString *dialogCategory;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (copy, nonatomic) NSNumber *postDialogDelayInMilliseconds;
@property (copy, nonatomic) NSString *redactedText;
@property (copy, nonatomic) NSString *text;

+ (id)assistantUtteranceView;
+ (id)assistantUtteranceViewWithDictionary:(id)a0 context:(id)a1;

- (id)af_text;
- (id)_af_dialogIdentifier;
- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)af_dialogIdentifier;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (BOOL)af_isUtterance;
- (id)af_speakableText;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
