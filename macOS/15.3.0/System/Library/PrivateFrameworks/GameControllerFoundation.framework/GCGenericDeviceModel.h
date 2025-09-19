@class NSString, GCGenericDevicePhysicalInputModel, GCGenericDeviceDriverModel, NSNumber;

@interface GCGenericDeviceModel : NSObject <_GCDefaultPhysicalDeviceDelegate, _GCDefaultLogicalDeviceDelegate, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *productCategory;
@property (readonly, copy) NSString *productName;
@property (readonly, copy, getter=isFormFitting) NSNumber *formFitting;
@property (readonly, copy) GCGenericDeviceDriverModel *driver;
@property (readonly, copy) GCGenericDevicePhysicalInputModel *physicalInput;

+ (id)defaultLocalizedNameForElement:(id)a0;
+ (id)defaultSymbolNameForElement:(id)a0;
+ (BOOL)elementsMakeValidExtendedGamepad:(id)a0;
+ (BOOL)elementsMakeValidGamepad:(id)a0;
+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileWithIdentifier:(id)a1;
- (id)logicalDevice:(id)a0 makeControllerInputDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
- (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
- (Class)logicalDeviceControllerDescriptionClass:(id)a0;
- (BOOL)logicalDeviceControllerIsAttachedToHost:(id)a0;
- (id)logicalDeviceControllerProductCategory:(id)a0;
- (id)logicalDeviceControllerVendorName:(id)a0;
- (id)physicalDeviceGetHapticCapabilities:(id)a0;
- (id)physicalDeviceGetHapticCapabilityGraph:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
