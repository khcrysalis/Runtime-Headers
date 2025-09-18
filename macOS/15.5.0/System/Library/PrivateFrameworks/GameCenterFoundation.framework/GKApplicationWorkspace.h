@interface GKApplicationWorkspace : NSObject

+ (id)defaultWorkspace;
+ (long long)getPlatformForBundleID:(id)a0;

- (BOOL)applicationIsInstalled:(id)a0;
- (void)openURL:(id)a0;
- (void)openGameCenterSettings;
- (void)openGameCenterSettingsInviteFriends;
- (void)openICloudSettings;
- (id)applicationProxyForBundleID:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;
- (void)openNewsApp;
- (void)openSoftwareUpdateSettings;
- (short)openURLForArg:(id)a0 path:(id)a1;

@end
