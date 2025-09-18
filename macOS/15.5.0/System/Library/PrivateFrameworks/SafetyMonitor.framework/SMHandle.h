@class NSString, NSArray;

@interface SMHandle : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *primaryHandle;
@property (readonly, nonatomic) NSArray *secondaryHandles;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithSMHandleMO:(id)a0;
+ (long long)getSMHandleTypeWithHandle:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)descriptionDictionary;
- (id)canonicalizedHandle;
- (id)initWithPrimaryHandle:(id)a0 secondaryHandles:(id)a1;
- (id)outputToDictionary;
- (BOOL)hasEqualPrimaryHandle:(id)a0;

@end
