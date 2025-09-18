@class NSArray, NSNumber;

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) long long nextItemCount;
@property (copy, nonatomic) NSNumber *preemptiveNowPlayingQueueDetailsTimeOut;
@property (nonatomic) long long previousItemCount;

+ (id)getNowPlayingQueueDetails;
+ (id)getNowPlayingQueueDetailsWithDictionary:(id)a0 context:(id)a1;

- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
