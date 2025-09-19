@class NSArray, SAMPGetState;

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand

@property (retain, nonatomic) SAMPGetState *getState;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) double routeTimeout;

+ (id)getStateResponseRemote;
+ (id)getStateResponseRemoteWithDictionary:(id)a0 context:(id)a1;

- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
