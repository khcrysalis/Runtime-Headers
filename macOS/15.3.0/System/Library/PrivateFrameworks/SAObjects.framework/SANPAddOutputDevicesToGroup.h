@class NSString, NSArray;

@interface SANPAddOutputDevicesToGroup : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)addOutputDevicesToGroup;
+ (id)addOutputDevicesToGroupWithDictionary:(id)a0 context:(id)a1;

- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
