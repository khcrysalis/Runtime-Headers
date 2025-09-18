@class NSArray, NSString;

@interface SAAceDomainSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appIdHints;
@property (copy, nonatomic) NSString *domain;

+ (id)aceDomainSignal;
+ (id)aceDomainSignalWithDictionary:(id)a0 context:(id)a1;

- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
