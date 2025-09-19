@class NSString, NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter

@property (class, nonatomic, readonly) NSString *unitSlotKey;

@property (nonatomic, readonly) NSString *moduleDefaultUnitString;
@property (copy, nonatomic) NSArray *possibleUnits;

+ (Class)moduleSummaryEditorClass;
+ (BOOL)defaultAllowsDecimalNumbers;
+ (BOOL)defaultAllowsNegativeNumbers;

- (id)defaultStateForNewArrayElement;
- (BOOL)moduleSummaryShowsAddButtonForState:(id)a0;
- (id)moduleSummarySlotsForState:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultUnit;
- (id)defaultSerializedRepresentation;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;

@end
