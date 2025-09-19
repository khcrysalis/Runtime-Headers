@class NSString, NSNumber, NSObject;
@protocol NSSecureCoding, NSCopying, NSObject, OS_dispatch_queue;

@interface GCHIDServiceInfo : NSObject <_GCImplicitIPCObject, NSCopying>

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct __IOHIDServiceClient { } *service;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNumber *registryID;

- (id)name;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (id)redactedDescription;
- (id)numberPropertyForKey:(id)a0;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0 queue:(id)a1;
- (id)dictionaryPropertyForKey:(id)a0;
- (id)stringPropertyForKey:(id)a0;
- (BOOL)isEqualToHIDServiceInfo:(id)a0;
- (id)propertyForKey:(id)a0 ofClass:(Class)a1;

@end
