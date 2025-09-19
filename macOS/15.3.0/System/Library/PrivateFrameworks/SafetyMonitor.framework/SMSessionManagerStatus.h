@class SMSessionManagerState, NSString, NSUUID, NSDate;

@interface SMSessionManagerStatus : NSObject <RTCoreDataReadable, RTCoreDataWritable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDate *stateQueryDate;
@property (copy, nonatomic) NSUUID *lastSessionIDDuringMagnetBreak;
@property (copy, nonatomic) SMSessionManagerState *state;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithSessionManagerStatusMO:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (void)updateManagedObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 stateQueryDate:(id)a1 lastSessionIDDuringMagnetBreak:(id)a2 state:(id)a3;

@end
