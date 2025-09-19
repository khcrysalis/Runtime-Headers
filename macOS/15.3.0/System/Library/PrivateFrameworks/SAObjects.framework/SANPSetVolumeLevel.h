@class NSString, NSArray, NSNumber;

@interface SANPSetVolumeLevel : SABaseClientBoundCommand

@property (nonatomic) BOOL acknowledgedExceedingVolumeLimit;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *volumeValue;

+ (id)setVolumeLevel;
+ (id)setVolumeLevelWithDictionary:(id)a0 context:(id)a1;

- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
