@protocol WFAddButtonParameterDelegate;

@interface WFAddButtonParameter : WFParameter <WFModuleSummarySupporting>

@property (weak, nonatomic) id<WFAddButtonParameterDelegate> delegate;

+ (Class)moduleSummaryEditorClass;

- (BOOL)moduleSummaryShowsAddButtonForState:(id)a0;
- (id)moduleSummarySlotsForState:(id)a0;
- (void).cxx_destruct;

@end
