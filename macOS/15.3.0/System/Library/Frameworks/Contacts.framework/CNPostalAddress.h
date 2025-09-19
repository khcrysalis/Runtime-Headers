@class NSString;

@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *street1;
@property (nonatomic, readonly) NSString *street2;
@property (copy) NSString *street;
@property (copy) NSString *subLocality;
@property (copy) NSString *city;
@property (copy) NSString *subAdministrativeArea;
@property (copy) NSString *state;
@property (copy) NSString *postalCode;
@property (copy) NSString *country;
@property (copy) NSString *ISOCountryCode;
@property (copy) NSString *formattedAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_rt_labelStringWithAddressLabelType:(unsigned long long)a0;
+ (id)_ABKeyFromCNKey:(id)a0;
+ (id)_CNKeyFromABKey:(id)a0;
+ (id)backwardsCompatiblePostalAddressDictionary:(id)a0;
+ (id)postalAddressFromWebServiceDictionaryRepresentation:(id)a0;
+ (id)postalAddressWithDictionaryRepresentation:(id)a0;
+ (id)localizedStringForKey:(id)a0;
+ (id)postalAddressWithAddressBookDictionaryRepresentation:(id)a0;

- (id)_rt_toString;
- (id)CalLocation;
- (id)formattedAddressString;
- (id)formattedAddressStrings;
- (id)_countryCodeForCountryName:(id)a0;
- (id)backwardsCompatibleDictionaryRepresentation;
- (id)redactedPostalAddress;
- (id)redactedStreetAddress;
- (id)suggestedCountryCode;
- (id)webServiceDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithPostalAddress:(id)a0;
- (BOOL)isValid:(id *)a0;
- (id)addressBookDictionaryRepresentation;

@end
