@class NSString, GEOStyleAttributes, NSArray;
@protocol GEOTransitTextDataSource, GEOTransitShieldDataSource, GEOTransitIconDataSource;

@interface VKImageSourceKey : NSObject <GEOTransitArtworkDataSource, GEOTransitIconDataSource, GEOTransitShieldDataSource> {
    struct Color<unsigned char, 4, geo::ColorSpace::Linear> { struct Matrix<unsigned char, 4, 1> { unsigned char _e[4]; } _backing; } _shieldColor;
    struct IconVariant { unsigned int primary; unsigned int secondary; } _iconVariant;
}

@property (readonly, nonatomic) int artworkSourceType;
@property (readonly, nonatomic) int artworkUseType;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (readonly, nonatomic) id<GEOTransitTextDataSource> textDataSource;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) unsigned int cartoID;
@property (readonly, nonatomic) unsigned int defaultTransitType;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (nonatomic) unsigned char dataType;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *relatedText;
@property (nonatomic) unsigned int dataValue;
@property (nonatomic) struct CGPoint { double x; double y; } imageCenter;
@property (retain, nonatomic) NSArray *fallbackImageKeys;
@property (readonly, nonatomic) float contentScale;
@property (readonly, nonatomic) unsigned int variant;
@property (readonly, nonatomic) unsigned int secondaryVariant;
@property (readonly, nonatomic) unsigned int countryCode;
@property (readonly, nonatomic) unsigned int keyType;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) unsigned int shieldType;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldTextLocale;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; } transitLineColor;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (nonatomic) long long sizeGroup;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDataType:(unsigned char)a0;
- (id)_initWithKeyType:(unsigned int)a0;
- (id)initWithIconAttributeKey:(unsigned int)a0 attributeValue:(unsigned int)a1;
- (id)initWithIconName:(const char *)a0;
- (id)initWithLabelImageKey:(const void *)a0;
- (id)initWithShieldName:(const char *)a0 text:(const char *)a1 locale:(const char *)a2 color:(struct Color<unsigned char, 4, geo::ColorSpace::Linear> { struct Matrix<unsigned char, 4, 1> { unsigned char x0[4]; } x0; })a3;
- (id)initWithShieldText:(const char *)a0 locale:(const char *)a1 type:(unsigned int)a2 color:(struct Color<unsigned char, 4, geo::ColorSpace::Linear> { struct Matrix<unsigned char, 4, 1> { unsigned char x0[4]; } x0; })a3;

@end
