@class RTLocation, NSString, NSUUID, RTMapItemExtendedAttributes, NSDate, NSData, RTAddress;

@interface RTMapItem : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RTMapItemExtendedAttributes *extendedAttributes;
@property (nonatomic) unsigned long long source;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double weight;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSData *geoMapItemHandle;
@property (readonly, nonatomic) RTAddress *address;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned long long mapItemPlaceType;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) long long resultProviderID;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, copy, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL disputed;

+ (id)heaviestMapItemFrom:(id)a0 closestToLocation:(id)a1 distanceCalculator:(id)a2 error:(id *)a3;
+ (id)createWithLearnedLocationOfInterestMO:(id)a0;
+ (id)createWithLearnedPlaceMO:(id)a0;
+ (id)createWithManagedObject:(id)a0;
+ (id)createWithMapItemMO:(id)a0;
+ (id)sourceToString:(unsigned long long)a0;
+ (id)placeTypeToString:(unsigned long long)a0;
+ (BOOL)hasKnownTypeItem:(id)a0;
+ (double)weightForExtendedAttributes:(id)a0;
+ (double)weightForSource:(unsigned long long)a0;

- (id)removeSource:(unsigned long long)a0;
- (id)appendSource:(unsigned long long)a0;
- (id)managedObjectWithContext:(id)a0;
- (id)mergeWithMapItem:(id)a0 preservingProperties:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 address:(id)a3 location:(id)a4 source:(unsigned long long)a5 mapItemPlaceType:(unsigned long long)a6 muid:(unsigned long long)a7 resultProviderID:(long long)a8 geoMapItemHandle:(id)a9 creationDate:(id)a10 expirationDate:(id)a11 extendedAttributes:(id)a12 displayLanguage:(id)a13 disputed:(BOOL)a14;
- (BOOL)isEqualToMapItem:(id)a0;
- (BOOL)validMUID;
- (void)updateWeightWithSource:(unsigned long long)a0 extendedAttributes:(id)a1;

@end
