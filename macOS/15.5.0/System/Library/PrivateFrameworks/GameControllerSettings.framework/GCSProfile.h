@class NSUUID, NSString, NSDictionary, NSDate;
@protocol GCSJSONObject;

@interface GCSProfile : NSObject <GCSJSONSerializable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) NSUUID *defaultProfileUUID;
@property (class, readonly) GCSProfile *defaultProfile;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (readonly, nonatomic) NSDate *modifiedDate;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *persistentControllerIdentifier;
@property (readonly, nonatomic) NSString *gameBundleIdentifier;
@property (readonly, nonatomic, getter=isBaseProfile) BOOL baseProfile;
@property (readonly, nonatomic) BOOL customizable;
@property (readonly, nonatomic) NSString *sfSymbolsName;
@property (readonly, nonatomic) NSDictionary *elementMappings;
@property (readonly, nonatomic) BOOL hapticFeedbackOverride;
@property (readonly, nonatomic) double hapticStrength;
@property (readonly, nonatomic) long long doublePressShareGesture;
@property (readonly, nonatomic) long long longPressShareGesture;
@property (readonly, nonatomic) BOOL lightbarOverride;
@property (readonly, nonatomic) BOOL lightbarCustomColorEnabled;
@property (readonly, nonatomic) long long lightbarColor;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSString *id;

+ (id)profile;
+ (id)newBaseProfile;
+ (id)archivalClasses;
+ (id)adhocProfileForController:(id)a0 gameBundleIdentifier:(id)a1;
+ (long long)defaultDoublePressGesture;
+ (long long)defaultLongPressGesture;
+ (id)elementMappingsFrom:(id)a0 for:(id)a1;
+ (id)profileWithName:(id)a0;

- (id)elementMappingForPhysicalPress:(id)a0;
- (id)directionPadMappingForPhysicalPress:(id)a0;
- (id)logicalButtonForPhysicalPressOf:(id)a0 onPhysicalInputProfile:(id)a1;
- (id)logicalDirectionPadForPhysicalPressOf:(id)a0 onPhysicalInputProfile:(id)a1;
- (id)logicalElementForPhysicalPressOf:(id)a0 onPhysicalInputProfile:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)anonymizedCopy;
- (id)initWithJSONObject:(id)a0;
- (id)elementMappingsWithJSONDictionary:(id)a0;
- (id)initWithUUID:(id)a0 name:(id)a1 persistentControllerIdentifier:(id)a2 gameBundleIdentifier:(id)a3 baseProfile:(BOOL)a4 customizable:(BOOL)a5 sfSymbolsName:(id)a6 elementMappings:(id)a7 hapticFeedbackOverride:(BOOL)a8 hapticStrength:(double)a9 doublePressShareGesture:(long long)a10 longPressShareGesture:(long long)a11 lightbarOverride:(BOOL)a12 lightbarCustomColorEnabled:(BOOL)a13 lightbarColor:(long long)a14;

@end
