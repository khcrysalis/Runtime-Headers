@interface ULTapToRadar : NSObject

+ (void)createMicroLocationTapToRadarWithTitle:(id)a0 description:(id)a1 extensionIDs:(id)a2 displayReason:(id)a3 completionHandler:(id /* block */)a4;
+ (void)createRadarForDatabaseAccessFailure;
+ (void)createRadarForMigrationFailure;
+ (void)createRadarWithComponentName:(id)a0 componentVersion:(id)a1 componentID:(id)a2 classification:(long long)a3 reproducibility:(long long)a4 title:(id)a5 description:(id)a6 extensionIDs:(id)a7 processName:(id)a8 displayReason:(id)a9 isUserInitiated:(BOOL)a10 completionHandler:(id /* block */)a11;
+ (long long)_classificationFromULTapToRadarClassification:(long long)a0;
+ (long long)_reproducibilityFromULTapToRadarReproducibility:(long long)a0;

@end
