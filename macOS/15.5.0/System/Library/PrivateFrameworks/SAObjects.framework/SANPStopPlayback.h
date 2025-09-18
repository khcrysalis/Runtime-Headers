@class NSArray;

@interface SANPStopPlayback : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)stopPlayback;
+ (id)stopPlaybackWithDictionary:(id)a0 context:(id)a1;

- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
