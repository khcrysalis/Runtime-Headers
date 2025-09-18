@class NSString, NSNumber;

@interface WFStepperParameter : WFParameter <WFModuleSummarySupporting>

@property (readonly, copy, nonatomic) NSString *stepperPrefix;
@property (readonly, copy, nonatomic) NSString *stepperDescription;
@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)a0;
- (void).cxx_destruct;
- (id)localizedLabel;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (Class)singleStateClass;
- (id)localizedLabelWithState:(id)a0 includingPrefix:(BOOL)a1;
- (id)localizedLabelWithoutCountAndPrefix;
- (id)localizedLabelFormatString;

@end
