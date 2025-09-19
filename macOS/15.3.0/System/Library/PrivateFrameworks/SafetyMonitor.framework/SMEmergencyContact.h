@class NSString, NSUUID;

@interface SMEmergencyContact : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *phoneNumber;

+ (id)createWithEmergenecyContact:(id)a0;
+ (id)createWithManagedObject:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 phoneNumber:(id)a2;

@end
