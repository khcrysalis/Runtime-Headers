@class NSString, NSUUID, RTPlaceInference, NSDate;

@interface RTPlaceInferenceQuery : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) unsigned long long fidelityPolicyMask;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) RTPlaceInference *placeInference;
@property (readonly, nonatomic) NSString *sourceIdentifier;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithPlaceInferenceQueryMO:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 date:(id)a1 errorCode:(long long)a2 fidelityPolicyMask:(unsigned long long)a3 placeInference:(id)a4 sourceIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 date:(id)a1 fidelityPolicyMask:(unsigned long long)a2 placeInference:(id)a3;
- (id)initWithIdentifier:(id)a0 date:(id)a1 fidelityPolicyMask:(unsigned long long)a2 placeInference:(id)a3 sourceIdentifier:(id)a4;

@end
