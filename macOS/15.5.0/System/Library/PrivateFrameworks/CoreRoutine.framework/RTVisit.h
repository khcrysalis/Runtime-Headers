@class NSString, RTPlaceInference, RTLocation, NSDate;

@interface RTVisit : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RTPlaceInference *placeInference;
@property (readonly, nonatomic) long long dataPointCount;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) RTLocation *location;
@property (readonly, copy, nonatomic) NSDate *entry;
@property (readonly, copy, nonatomic) NSDate *exit;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) long long source;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithVisitMO:(id)a0;
+ (id)stringFromVisitSource:(long long)a0;
+ (id)stringFromVisitIncidentType:(long long)a0;
+ (long long)visitIncidentTypeFromString:(id)a0;
+ (BOOL)validVisitSources:(id)a0;

- (id)dictionaryOutForBluePOIReplayWithBluePOIQueries:(id)a0;
- (id)initWithDefaultsDictionanry:(id)a0;
- (id)initWithLearnedVisit:(id)a0;
- (id)initWithLearnedVisit:(id)a0 inferredMapItem:(id)a1 finerGranularityInferredMapItem:(id)a2 userPlaceType:(unsigned long long)a3 userPlaceTypeSource:(unsigned long long)a4 loiIdentifier:(id)a5;
- (id)managedObjectWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 type:(long long)a1 location:(id)a2 entry:(id)a3 exit:(id)a4 dataPointCount:(long long)a5 confidence:(double)a6 placeInference:(id)a7;
- (id)initWithDate:(id)a0 type:(long long)a1 location:(id)a2 entry:(id)a3 exit:(id)a4 dataPointCount:(long long)a5 confidence:(double)a6 placeInference:(id)a7 source:(long long)a8;
- (BOOL)isEqualToVisit:(id)a0;

@end
