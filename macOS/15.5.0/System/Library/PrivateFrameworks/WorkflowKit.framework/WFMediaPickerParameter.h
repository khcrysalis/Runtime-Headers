@class WFAction;

@interface WFMediaPickerParameter : WFParameter <WFModuleSummarySupporting>

@property (weak, nonatomic) WFAction *action;

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotsForState:(id)a0;
- (void).cxx_destruct;
- (BOOL)parameterStateIsValid:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForState:(id)a0;

@end
