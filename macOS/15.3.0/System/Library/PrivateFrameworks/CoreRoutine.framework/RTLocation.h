@class NSString, NSDate;

@interface RTLocation : NSObject <RTCoreDataReadable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double horizontalUncertainty;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double uncertainty;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double verticalUncertainty;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int referenceFrame;
@property (readonly, nonatomic) unsigned long long sourceAccuracy;

+ (int)convertLocationReferenceFrame:(int)a0;
+ (id)createWithManagedObject:(id)a0;
+ (id)createWithMapItemMO:(id)a0;
+ (id)sourceAccuracyToString:(unsigned long long)a0;

- (id)initWithCLLocation:(id)a0;
- (id)initWithCLLocationCoordinate2D:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0;
- (id)initWithRTPair:(id)a0;
- (void)_distanceBetweenShiftedLocation:(id)a0 unshiftedLocation:(id)a1 locationShifter:(id)a2 handler:(id /* block */)a3;
- (double)distanceFromLocation:(id)a0 locationShifter:(id)a1 error:(id *)a2;
- (void)distanceFromLocation:(id)a0 locationShifter:(id)a1 handler:(id /* block */)a2;
- (id)initWithCLCircularRegion:(id)a0;
- (id)initWithRTPLocation:(id)a0;
- (id)locationAtDistance:(double)a0 course:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setUncertainty:(double)a0;
- (id)coordinateToString;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 altitude:(double)a3 verticalUncertainty:(double)a4 date:(id)a5 referenceFrame:(int)a6 speed:(double)a7;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 altitude:(double)a3 verticalUncertainty:(double)a4 date:(id)a5 referenceFrame:(int)a6 speed:(double)a7 sourceAccuracy:(unsigned long long)a8;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 date:(id)a3;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 date:(id)a3 referenceFrame:(int)a4;
- (BOOL)isEqualToLocation:(id)a0;
- (id)outputToDictionary;

@end
