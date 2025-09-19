@class SAUIAssistantUtteranceView, SAUIButton;

@interface SAUIDialogPunchout : SAAceView

@property (retain, nonatomic) SAUIButton *buttonView;
@property (retain, nonatomic) SAUIAssistantUtteranceView *utteranceView;

+ (id)dialogPunchout;
+ (id)dialogPunchoutWithDictionary:(id)a0 context:(id)a1;

- (id)_af_dialogIdentifier;
- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
