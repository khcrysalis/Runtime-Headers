@interface WFLocationParameter : WFParameter <WFModuleSummarySupporting>

@property (readonly, nonatomic) BOOL defaultToCurrentLocation;
@property (readonly, nonatomic) BOOL allowsTextOnlyLocations;
@property (readonly, nonatomic) BOOL allowsCurrentLocation;
@property (readonly, nonatomic) BOOL skipsProcessingCurrentLocation;
@property (readonly, nonatomic) double currentLocationAccuracy;

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)a0;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (Class)singleStateClass;

@end
