@class NSString;

@interface WFPhotoItemCollectionParameter : WFParameter <WFModuleSummarySupporting>

@property (readonly, nonatomic) NSString *pickerMode;
@property (readonly, nonatomic) long long selectionLimit;

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)a0;
- (BOOL)areItemsInPhotoItemCollectionOfType:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;

@end
