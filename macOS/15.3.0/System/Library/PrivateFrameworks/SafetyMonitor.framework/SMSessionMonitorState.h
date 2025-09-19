@class NSString, NSUUID, NSDate;

@interface SMSessionMonitorState : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long currentRegionState;
@property (readonly, nonatomic) NSDate *date;
@property (nonatomic) BOOL triggerPending;
@property (nonatomic) BOOL triggerConfirmed;
@property (nonatomic) BOOL dirty;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithSMSessionMonitorStateMO:(id)a0;
+ (id)regionStateToString:(unsigned long long)a0;

- (id)managedObjectWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 currentRegionState:(unsigned long long)a1 triggerPending:(BOOL)a2 triggerConfirmed:(BOOL)a3 date:(id)a4;
- (void)markDirty;

@end
