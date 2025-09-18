@class NSArray;

@interface WFWalletTransactionTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedPassUniqueIDs;
@property (retain, nonatomic) NSArray *selectedMerchantTypes;
@property (retain, nonatomic) NSArray *selectedMerchants;

+ (BOOL)registerContextSyncClient;
+ (BOOL)unregisterContextSyncClient;
+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;

- (id)contentCollectionWithEventInfo:(id)a0;
- (id)transactionIdentifierWithEvent:(id)a0;
- (id)dictionaryWithTransaction:(id)a0 transactionEvent:(id)a1;
- (void)eventInfoForEvent:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasRemotePublisher;
- (BOOL)isPassIdentifierValid:(id)a0;
- (id)publisherWithScheduler:(id)a0;
- (id)remotePublisherWithScheduler:(id)a0;
- (BOOL)requiresEventInfoAsInput;
- (void)shouldFireInResponseToEvent:(id)a0 triggerIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;
- (Class)shortcutInputContentItemClass;

@end
