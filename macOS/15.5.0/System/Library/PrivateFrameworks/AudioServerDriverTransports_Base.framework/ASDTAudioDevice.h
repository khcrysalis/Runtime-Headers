@class NSSet, ASDTDeviceManager, NSMutableDictionary, ASDTPMSequencer, NSDictionary, NSString;

@interface ASDTAudioDevice : ASDAudioDevice <ASDTStatusProtocol, ASDTPMProtocol, ASDTUserActivityClientProtocol, ASDTUserActivityManagerProtocol> {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _protocolMutex;
}

@property (nonatomic) unsigned int pmOrderPowerUp;
@property (nonatomic) unsigned int pmOrderPowerDown;
@property (nonatomic) BOOL pmNoStateChangeOnFailure;
@property (retain, nonatomic) ASDTPMSequencer *pmSequencer;
@property (weak, nonatomic) ASDTDeviceManager *deviceManager;
@property (nonatomic) BOOL willDoReadInputInPlace;
@property (nonatomic) BOOL willDoWriteMixInPlace;
@property (retain, nonatomic) NSSet *relatedDeviceUIDs;
@property (readonly, nonatomic) NSSet *relatedDeviceObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *protocolMap;
@property (retain, nonatomic) NSMutableDictionary *ioThreads;
@property (readonly, nonatomic) BOOL userIsActive;
@property (retain, nonatomic) NSDictionary *inputLatencies;
@property (retain, nonatomic) NSDictionary *outputLatencies;
@property (readonly, nonatomic) NSDictionary *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) int powerState;

+ (double)defaultSamplingRate;
+ (id)deviceForConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;

- (id)name;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)allStreams;
- (void)setSamplingRate:(double)a0;
- (void)addControl:(id)a0;
- (void)removeControl:(id)a0;
- (BOOL)addCustomProperties:(id)a0;
- (void)addOutputStream:(id)a0;
- (BOOL)addStreams:(id)a0;
- (BOOL)changeSamplingRate:(double)a0;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (int)performStartIO;
- (int)performStopIO;
- (void)removeOutputStream:(id)a0;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;
- (void)addInputStream:(id)a0;
- (void)_updateSafetyOffsets:(double)a0;
- (void)addCustomProperty:(id)a0;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)ioThreadStateChange:(id)a0;
- (void)performIOThreadStateChange:(id)a0;
- (void)removeCustomProperty:(id)a0;
- (void)removeInputStream:(id)a0;
- (void)objectsConformingRemoveObjects:(id)a0;
- (BOOL)addControls:(id)a0;
- (BOOL)addPMDevices:(id)a0;
- (int)completeInitialization;
- (BOOL)configurationChangesPending;
- (id)customPropertyForAddress:(id)a0;
- (id)initWithConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;
- (unsigned int)numberOfIOThreadsForUseCaseID:(unsigned int)a0;
- (unsigned int)numberOfIOThreadsForUseCaseInDescription:(id)a0;
- (void)objectsConformingAddObjects:(id)a0;
- (id)objectsConformingToProtocol:(id)a0;
- (int)performPowerStateIdle:(int)a0;
- (int)performPowerStateInactive:(int)a0;
- (int)performPowerStateOn;
- (int)performPowerStatePrepare:(int)a0;
- (int)performPowerStatePrewarm:(int)a0;
- (int)performPowerStateSleep;
- (BOOL)setupSamplingRates:(id)a0;
- (int)streamPowerStateTransition:(int)a0;
- (BOOL)subclassInitWithConfig:(id)a0;
- (int)systemCompletedPowerOn;
- (int)systemSleepPending;
- (BOOL)updateCustomProperty:(id)a0 withAddress:(id)a1;
- (id)updateIOThreadStateChangeDescription:(id)a0;
- (void)updateInputLatency;
- (void)updateOutputLatency;
- (void)userActiveChanged:(BOOL)a0;

@end
