@class NSArray;

@interface SANPPausePlayback : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)pausePlayback;
+ (id)pausePlaybackWithDictionary:(id)a0 context:(id)a1;

- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
