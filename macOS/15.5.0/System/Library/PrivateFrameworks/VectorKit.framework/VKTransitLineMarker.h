@class NSString, GEOMapItemIdentifier;
@protocol GEOTransitTextDataSource, GEOTransitShieldDataSource, GEOTransitIconDataSource;

@interface VKTransitLineMarker : NSObject <MKTransitLineMarker, GEOTransitShieldDataSource, GEOTransitArtworkDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (readonly, nonatomic) int artworkSourceType;
@property (readonly, nonatomic) int artworkUseType;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (readonly, nonatomic) id<GEOTransitTextDataSource> textDataSource;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldLocale;
@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) struct { float r; float g; float b; float a; } shieldColor;
@property (readonly, nonatomic) NSString *labelText;
@property (readonly, nonatomic) NSString *labelLocale;
@property (readonly, nonatomic) void *transitLinkID;

+ (id)markerWithFeature:(void *)a0 transitLink:(const void *)a1;

@end
