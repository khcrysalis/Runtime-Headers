@class GKGameInternal, NSString, NSDictionary, NSURL, NSNumber, GKGameDescriptor;
@protocol GKUtilityService;

@interface GKGame : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isInstalled) BOOL installedGame;
@property (readonly) id<GKUtilityService> utilityService;
@property (retain) GKGameInternal *internal;
@property (readonly) NSURL *storeURL;
@property long long environment;
@property (nonatomic, getter=isPrerendered) BOOL prerendered;
@property (readonly, nonatomic) NSDictionary *gameDescriptorDictionary;
@property (readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property (readonly, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) NSNumber *externalVersion;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *shortBundleVersion;
@property (readonly, nonatomic) NSString *cacheKey;
@property (nonatomic) long long platform;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *defaultCategory;
@property (readonly, nonatomic) struct GKGameInfo { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; } gameInfo;
@property (readonly, nonatomic) BOOL supportsMultiplayer;
@property (readonly, nonatomic) BOOL supportsTurnBasedMultiplayer;

+ (id)platformDisplayString:(id)a0;
+ (void)preloadIconsForGames:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (struct CGSize { double x0; double x1; })serverImageSizeForIconStyle:(long long)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (BOOL)isFirstParty;
+ (void)loadGamesWithBundleIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)currentGameIncludingGameCenter:(BOOL)a0;
+ (id)createNonStaticCurrentGame;
+ (id)currentGame;
+ (BOOL)isGameCenter;
+ (BOOL)isNewsApp:(id)a0;
+ (BOOL)isPreferences;
+ (void)loadTopGamesWithCompletionHandler:(id /* block */)a0;
+ (void)setCurrentGameFromInternal:(id)a0 serverEnvironment:(long long)a1;
+ (void)updateGames:(id)a0 withCompletionHandler:(id /* block */)a1;

- (id)URLStringForImageWithShineIfNeeded;
- (id)_imageSourceForIconSize:(struct CGSize { double x0; double x1; })a0;
- (id)_imageURLForIconStyle:(long long)a0;
- (id)cachedIconForStyle:(long long)a0;
- (id)iconForStyle:(long long)a0;
- (id)imageSourceForIconStyle:(long long)a0;
- (id)imageSourceForiOSIconStyle:(long long)a0;
- (id)loadIconForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 withCompletionHandler:(id /* block */)a2;
- (id)loadIconForStyle:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)localImageSourceWithName:(id)a0 imageBrush:(id)a1;
- (id)logoImageWithMaximumSize:(struct CGSize { double x0; double x1; })a0;
- (id)macBrushForIconStyle:(long long)a0;
- (id)networkImageSourceWithName:(id)a0 imageBrush:(id)a1;
- (void)openAppStorePage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)isDaemon;
- (id)initWithInternalRepresentation:(id)a0;
- (BOOL)isSpringBoard;
- (BOOL)isAppStore;
- (id)utilityService;
- (void)getGameMatchesForAchievement:(id)a0 handler:(id /* block */)a1;
- (void)getGameMatchesForLeaderboard:(id)a0 handler:(id /* block */)a1;
- (void)getGameMatchesIncludingCompatibleGames:(BOOL)a0 handler:(id /* block */)a1;
- (BOOL)isContacts;
- (BOOL)isGameCenter;
- (BOOL)isGameCenterHostingContainer;
- (BOOL)isGameControllerDaemon;
- (BOOL)isInternalTestApp;
- (BOOL)isNewsApp;

@end
