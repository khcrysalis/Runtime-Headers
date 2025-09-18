@class NSString, NSArray, DSIDRecord;

@interface ADIDManager : ADSingleton <BackgroundTaskDelegate, ADIDManager_XPC>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSArray *monthlyResetArray;
@property (retain) DSIDRecord *activeDSIDRecord;
@property (readonly, nonatomic) long long PersonalizedAdsMonthResetCount;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (id)save;
- (void)deleteRecords:(id /* block */)a0;
- (BOOL)runTask:(id)a0;
- (void)performOperationAfterReconcile:(id /* block */)a0;
- (void)cancelPendingReconcile;
- (void)checkForLateReconcile;
- (void)checkOnTask:(id)a0 activity:(id)a1;
- (void)finishedReconciling:(id /* block */)a0 withError:(id)a1;
- (void)handleAccountChange:(id /* block */)a0;
- (void)incrementMonthlyResetCount;
- (void)notifyActiveRecordChanged;
- (void)performOperationWhenNotReconciling:(id /* block */)a0;
- (void)prepareForPushNotification;
- (void)reconcile:(id /* block */)a0;
- (BOOL)reconcileInProgress;
- (id)reconcileOperations;
- (void)rotateAccountToken;
- (id)saveAndNotifyIfNecessary;
- (void)saveDataForPCD;
- (BOOL)scheduleDailyUpdate;
- (BOOL)scheduleReconciliation:(double)a0;
- (void)setDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setReconcileOperations:(id)a0;
- (void)updateAccountData:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)deviceIdentifiers;
- (void)forceReconcile:(id /* block */)a0;
- (void)logIDs:(id)a0;
- (BOOL)clearDSIDRecords;
- (id)encryptedIDForClientType:(long long)a0;
- (id)getDSIDDicFromStorage;
- (id)idForClientType:(long long)a0;
- (id)reloadRecords:(id)a0;
- (BOOL)setDSIDDicToStorage:(id)a0;
- (BOOL)loadIDs;
- (id)loadFakeRecord:(id)a0;
- (id)dsidRecord:(id)a0 fromDict:(id)a1;
- (void)reloadRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)retrieveDeviceIDs;

@end
