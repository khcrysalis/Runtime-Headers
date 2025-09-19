@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SignpostSupportMachTimeTranslator : NSObject

@property (readonly, nonatomic) NSMutableArray *translationRanges;
@property (readonly, nonatomic) NSMutableArray *startMachAbsoluteTimes;
@property (readonly, nonatomic) NSMutableArray *startMachContinuousTimes;
@property (nonatomic) unsigned long long maxEntries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property BOOL isMonitoringSleepWake;
@property (readonly, nonatomic) BOOL containsContinuousTimeJumps;

+ (void)_addListeningTimeTranslator:(id)a0;
+ (void)_removeListeningTimeTranslator:(id)a0;
+ (id)_globalNotificationDispatchQueue;
+ (void)_processPowerNotificationOfType:(unsigned int)a0 withNotificationID:(long long)a1;
+ (void)_snapshotMachTimesForAllListeners;
+ (id)_timeTranslationLog;

- (void)_grabMachTimesSnapshot;
- (id)dataRepresentationDuringMonitoring;
- (id)initWithMaxEntries:(unsigned long long)a0;
- (void)startMonitoringSleepWake;
- (void)stopMonitoringSleepWake;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)addTimestampPairWithMachAbsoluteTime:(unsigned long long)a0 machContinuousTime:(unsigned long long)a1;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)a0;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)a0;
- (id)serializableDictionaryRepresentation;

@end
