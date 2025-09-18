@interface WFVariableFieldParameter : WFParameter <WFModuleSummarySupporting>

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)a0;
- (id)defaultSupportedVariableTypes;
- (Class)singleStateClass;
- (id)importQuestionBehavior;

@end
