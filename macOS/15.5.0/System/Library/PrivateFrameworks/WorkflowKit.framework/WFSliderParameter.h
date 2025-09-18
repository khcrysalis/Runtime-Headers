@class NSNumber, WFImage;

@interface WFSliderParameter : WFParameter <WFModuleSummarySupporting>

@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) WFImage *minimumIcon;
@property (readonly, nonatomic) WFImage *maximumIcon;

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (Class)singleStateClass;
- (id)localizedLabelWithState:(id)a0;
- (BOOL)shouldAlignLabels;

@end
