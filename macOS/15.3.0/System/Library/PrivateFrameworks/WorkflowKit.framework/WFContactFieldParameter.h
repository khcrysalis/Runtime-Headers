@class NSString, NSArray;

@interface WFContactFieldParameter : WFParameter <WFModuleSummarySupporting>

@property (readonly, nonatomic) BOOL allowsTextEntry;
@property (readonly, nonatomic) NSString *keyboardType;
@property (readonly, nonatomic) NSString *textAlignment;
@property (readonly, nonatomic) NSString *autocapitalizationType;
@property (readonly, nonatomic) NSString *autocorrectionType;
@property (readonly, nonatomic) NSArray *supportedContactProperties;
@property (readonly, nonatomic) BOOL hidesLabel;
@property (readonly, nonatomic) BOOL allowsCustomHandles;

+ (Class)moduleSummaryEditorClass;

- (id)labelForState:(id)a0;
- (id)defaultStateForNewArrayElement;
- (BOOL)moduleSummaryShowsAddButtonForState:(id)a0;
- (id)moduleSummarySlotForState:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)stateClass;
- (Class)singleStateClass;
- (BOOL)displaysMultipleValueEditor;
- (Class)multipleStateClass;
- (BOOL)shouldAlignLabels;

@end
