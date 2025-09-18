@class NSArray, NSNumber;

@interface SANPSeekToPlaybackPosition : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *positionInMilliseconds;

+ (id)seekToPlaybackPosition;
+ (id)seekToPlaybackPositionWithDictionary:(id)a0 context:(id)a1;

- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
