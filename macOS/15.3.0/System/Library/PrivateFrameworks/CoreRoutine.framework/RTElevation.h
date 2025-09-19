@class NSString, NSDate;

@interface RTElevation : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double elevation;
@property (readonly, nonatomic) double elevationUncertainty;
@property (readonly, nonatomic) long long estimationStatus;

+ (id)createWithElevationMO:(id)a0;
+ (id)createWithManagedObject:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithElevation:(double)a0 dateInterval:(id)a1;
- (id)initWithElevation:(double)a0 dateInterval:(id)a1 elevationUncertainty:(double)a2 estimationStatus:(long long)a3;

@end
