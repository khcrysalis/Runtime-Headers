@interface WFHomeServicePickerParameter : WFParameter <WFModuleSummarySupporting>

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)a0;
- (BOOL)allowsMultipleValues;
- (Class)singleStateClass;
- (id)localizedLabelForState:(id)a0;

@end
