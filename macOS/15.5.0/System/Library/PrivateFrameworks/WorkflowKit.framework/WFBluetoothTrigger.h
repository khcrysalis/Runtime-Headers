@class NSArray;

@interface WFBluetoothTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedDevices;
@property (nonatomic) unsigned long long selection;
@property (nonatomic) BOOL onConnect;
@property (nonatomic) BOOL onDisconnect;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (id)tintColor;
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)requiresNotification;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (id)publisherWithScheduler:(id)a0;
- (void)shouldFireInResponseToEvent:(id)a0 triggerIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
