@class NSObject;
@protocol OS_os_log;

@interface RMLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *assetResolverController;
@property (class, readonly) NSObject<OS_os_log> *configurationCombineApplicator;
@property (class, readonly) NSObject<OS_os_log> *configurationMultipleApplicator;
@property (class, readonly) NSObject<OS_os_log> *configurationSingleApplicator;
@property (class, readonly) NSObject<OS_os_log> *configurationSubscriberClient;
@property (class, readonly) NSObject<OS_os_log> *configurationSubscriberDelegate;
@property (class, readonly) NSObject<OS_os_log> *configurationSubscriberEventStream;
@property (class, readonly) NSObject<OS_os_log> *configurationSubscriberService;
@property (class, readonly) NSObject<OS_os_log> *profileStore;
@property (class, readonly) NSObject<OS_os_log> *statusPublisherDelegate;
@property (class, readonly) NSObject<OS_os_log> *statusPublisherDescription;
@property (class, readonly) NSObject<OS_os_log> *storeKeychainController;
@property (class, readonly) NSObject<OS_os_log> *profilesAdapter;
@property (class, readonly) NSObject<OS_os_log> *profilesController;
@property (class, readonly) NSObject<OS_os_log> *subscribedConfigurationReference;
@property (class, readonly) NSObject<OS_os_log> *nsdata_rm;
@property (class, readonly) NSObject<OS_os_log> *nsdictionary_rm;
@property (class, readonly) NSObject<OS_os_log> *accountHelper;
@property (class, readonly) NSObject<OS_os_log> *debounceTimer;
@property (class, readonly) NSObject<OS_os_log> *device;
@property (class, readonly) NSObject<OS_os_log> *enrollmentController;
@property (class, readonly) NSObject<OS_os_log> *jsonUtilities;
@property (class, readonly) NSObject<OS_os_log> *locations;
@property (class, readonly) NSObject<OS_os_log> *managedDevice;
@property (class, readonly) NSObject<OS_os_log> *managedKeychainController;
@property (class, readonly) NSObject<OS_os_log> *managedTrustStoreController;
@property (class, readonly) NSObject<OS_os_log> *mcAdapter;
@property (class, readonly) NSObject<OS_os_log> *mdmHelper;
@property (class, readonly) NSObject<OS_os_log> *sandbox;
@property (class, readonly) NSObject<OS_os_log> *sharedLock;
@property (class, readonly) NSObject<OS_os_log> *timeddispatch;
@property (class, readonly) NSObject<OS_os_log> *xpcEvent;
@property (class, readonly) NSObject<OS_os_log> *xpcNotifications;

@end
