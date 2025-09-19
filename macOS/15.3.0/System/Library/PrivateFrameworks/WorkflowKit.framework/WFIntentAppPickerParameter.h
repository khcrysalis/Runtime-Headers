@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter

@property (readonly, nonatomic) NSString *intentName;

- (id)moduleSummarySlotsForState:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)possibleStatesDidChange;
- (Class)singleStateClass;
- (BOOL)alwaysShowsButton;

@end
