@interface WFBatteryLevelTrigger : WFTrigger

@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long selection;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (id)publisherWithScheduler:(id)a0;
- (void)shouldFireInResponseToEvent:(id)a0 triggerIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
