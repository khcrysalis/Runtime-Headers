@class NSString, NSUUID, NSArray, NSDate;

@interface RTFingerprint : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long settledState;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSArray *accessPoints;

+ (id)createWithFingerprintMO:(id)a0;
+ (id)createWithManagedObject:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 settledState:(unsigned long long)a1 start:(id)a2 accessPoints:(id)a3;

@end
