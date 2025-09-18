@class NSString, NSUUID, SMHandle, NSDate, NSData, RTLocation;

@interface SMReceiverSessionStatus : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *lastUpdateDate;
@property (copy, nonatomic) NSUUID *sessionID;
@property (copy, nonatomic) SMHandle *initiatorHandle;
@property (nonatomic) long long sessionState;
@property (nonatomic) BOOL zoneShareAccepted;
@property (nonatomic) unsigned long long sessionType;
@property (copy, nonatomic) NSDate *sessionStartDate;
@property (copy, nonatomic) NSDate *estimatedEndDate;
@property (copy, nonatomic) NSDate *coarseEstimatedEndDate;
@property (nonatomic) unsigned long long destinationType;
@property (copy, nonatomic) NSData *destinationMapItem;
@property (copy, nonatomic) NSDate *triggerDate;
@property (copy, nonatomic) RTLocation *locationOfTrigger;
@property (nonatomic) unsigned long long triggerType;
@property (copy, nonatomic) NSDate *cacheRequestDate;
@property (nonatomic) unsigned long long sessionEndReason;
@property (copy, nonatomic) NSDate *cacheExpiryDate;
@property (copy, nonatomic) NSDate *lastSessionStartInfoRequestDate;
@property (nonatomic) long long sessionStartInfoRequestCount;
@property (copy, nonatomic) NSDate *lastKeyReleaseInfoRequestDate;
@property (nonatomic) long long keyReleaseInfoRequestCount;
@property (nonatomic) BOOL isSOSTrigger;
@property (nonatomic) long long lowPowerModeWarningState;
@property (nonatomic) long long cacheDownloadError;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *receiverHandle;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithReceiverSessionStatusMO:(id)a0;
+ (id)convertSessionStateToString:(long long)a0;

- (id)managedObjectWithContext:(id)a0;
- (void)updateManagedObject:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 sessionID:(id)a1 initiatorHandle:(id)a2;
- (BOOL)isSessionOngoing;
- (id)outputToDictionary;

@end
