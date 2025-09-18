@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)powerLogEventKindForTrigger:(id)a0;
+ (BOOL)unregisterContextSyncClient;
+ (id)localizedDisplayName;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)requiresNotification;
+ (long long)triggerBacking;
+ (id)inputTypeDescriptionForClass:(Class)a0;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;
+ (id)triggerWithSerializedData:(id)a0;

- (id)contentCollectionWithEventInfo:(id)a0;
- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (BOOL)contextStoreRegistrationIsForWatch;
- (id)eventInfoForEvent:(id)a0;
- (void)eventInfoForEvent:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasRemotePublisher;
- (BOOL)needsRegistrationAfterFiring;
- (id)publisherWithScheduler:(id)a0;
- (id)remotePublisherWithScheduler:(id)a0;
- (BOOL)requiresEventInfoAsInput;
- (void)shouldFireInResponseToEvent:(id)a0 triggerIdentifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldFireTriggerWithEventInfo:(id)a0 error:(out id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDisplayName;
- (id)serializedData;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)displayGlyph;
- (double)displayGlyphCornerRadius;
- (id)displayGlyphHierarchicalColors;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (BOOL)hasValidConfiguration;
- (id)localizedDisplayExplanation;
- (Class)shortcutInputContentItemClass;

@end
