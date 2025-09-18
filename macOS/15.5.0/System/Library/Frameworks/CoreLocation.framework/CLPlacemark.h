@class CLRegion, NSString, NSArray, CNPostalAddress, NSDictionary, CLPlacemarkInternal, NSTimeZone, CLLocation;

@interface CLPlacemark : NSObject <INJSONSerializable, INCodableAttributeRelationComparing, NSCopying, NSSecureCoding> {
    CLPlacemarkInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) CLRegion *region;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSDictionary *addressDictionary;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *thoroughfare;
@property (readonly, copy, nonatomic) NSString *subThoroughfare;
@property (readonly, copy, nonatomic) NSString *locality;
@property (readonly, copy, nonatomic) NSString *subLocality;
@property (readonly, copy, nonatomic) NSString *administrativeArea;
@property (readonly, copy, nonatomic) NSString *subAdministrativeArea;
@property (readonly, copy, nonatomic) NSString *postalCode;
@property (readonly, copy, nonatomic) NSString *ISOcountryCode;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) NSString *inlandWater;
@property (readonly, copy, nonatomic) NSString *ocean;
@property (readonly, copy, nonatomic) NSArray *areasOfInterest;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;
+ (id)placemarkWithLocation:(id)a0 name:(id)a1 postalAddress:(id)a2;
+ (id)sourceToString:(unsigned long long)a0;
+ (id)placemarkWithGEOMapItem:(id)a0;

- (BOOL)_intents_compareValue:(id)a0 relation:(unsigned long long)a1;
- (id)_intents_indexingRepresentation;
- (id)_intents_defaultReadableDescription;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)initIntentPlacemarkWithLocation:(id)a0 addressDictionary:(id)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)category;
- (id)_geoMapItem;
- (id)_geoMapItemHandle;
- (id)_initWithGeoMapItem:(id)a0;
- (id)_initWithRTMapItem:(id)a0 location:(id)a1;
- (void)fetchFormattedAddress:(id /* block */)a0 queue:(id)a1;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)initWithLocation:(id)a0 addressDictionary:(id)a1 region:(id)a2 areasOfInterest:(id)a3;
- (id)initWithLocation:(id)a0 addressDictionary:(id)a1 region:(id)a2 areasOfInterest:(id)a3 mapItemSource:(unsigned long long)a4 geoMapItemHandle:(id)a5 category:(id)a6 meCardAddress:(id)a7;
- (id)initWithLocation:(id)a0 addressDictionary:(id)a1 region:(id)a2 areasOfInterest:(id)a3 mapItemSource:(unsigned long long)a4 geoMapItemHandle:(id)a5 category:(id)a6 meCardAddress:(id)a7 muid:(unsigned long long)a8;
- (id)initWithLocation:(id)a0 addressDictionary:(id)a1 region:(id)a2 areasOfInterest:(id)a3 mapItemSource:(unsigned long long)a4 geoMapItemHandle:(id)a5 meCardAddress:(id)a6;
- (id)initWithPlacemark:(id)a0;
- (unsigned long long)mapItemSource;
- (id)mecardAddress;
- (unsigned long long)muid;

@end
