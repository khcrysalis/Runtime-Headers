@class NSString;

@interface WFConditionalSubjectParameter : WFParameter <WFModuleSummarySupporting>

@property (class, nonatomic, readonly) NSString *subjectSlotKey;
@property (class, nonatomic, readonly) NSString *homeServiceSlotKey;
@property (class, nonatomic, readonly) NSString *homeCharacteristicSlotKey;

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotsForState:(id)a0;
- (Class)stateClass;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (id)disallowedVariableTypes;

@end
