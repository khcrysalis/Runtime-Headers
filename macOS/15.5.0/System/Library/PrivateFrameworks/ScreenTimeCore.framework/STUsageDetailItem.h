@class NSString, NSImage;

@interface STUsageDetailItem : NSObject

@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly) NSImage *iconImage;
@property (readonly) NSImage *lightColorsMonogram;
@property (readonly) NSImage *darkColorsMonogram;
@property (readonly, copy) NSString *identifier;
@property (readonly) BOOL isAllAppsOrCategories;
@property long long type;
@property (nonatomic) float quantity;
@property (readonly) float sortQuantity;
@property (readonly) BOOL usageTrusted;

+ (void)iconImageForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+ (id)keyPathsForValuesAffectingSortQuantity;

- (void)_didFindIconImage:(id)a0;
- (id)_monogramUsingDarkColors:(BOOL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (id)initWithType:(long long)a0 identifier:(id)a1 usageTrusted:(BOOL)a2;

@end
