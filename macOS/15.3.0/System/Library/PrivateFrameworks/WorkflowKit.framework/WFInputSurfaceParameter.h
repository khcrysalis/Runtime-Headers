@interface WFInputSurfaceParameter : WFParameter <WFModuleSummarySupporting>

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)a0;
- (id)defaultSupportedVariableTypes;
- (Class)singleStateClass;

@end
