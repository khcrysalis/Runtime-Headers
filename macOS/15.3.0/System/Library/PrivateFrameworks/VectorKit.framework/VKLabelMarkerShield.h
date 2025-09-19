@class NSString, VKImageSourceKey;

@interface VKLabelMarkerShield : NSObject <GEOTransitShieldDataSource> {
    VKImageSourceKey *_imageKey;
}

@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; } color;

- (void).cxx_destruct;
- (id)initWithImageKey:(id)a0;

@end
