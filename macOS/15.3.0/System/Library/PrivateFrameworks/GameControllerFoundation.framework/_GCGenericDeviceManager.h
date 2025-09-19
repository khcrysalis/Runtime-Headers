@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol NSSecureCoding, _GCLogicalDeviceRegistry, _GCPhysicalDeviceRegistry, NSCopying, NSObject, OS_dispatch_queue;

@interface _GCGenericDeviceManager : NSObject <_GCLogicalDeviceManager, _GCPhysicalDeviceManager> {
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_ioNotificationPort;
    NSObject<OS_dispatch_queue> *_ioNotificationQueue;
    unsigned int _ioHIDDeviceIterator;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_pendingDevices;
    NSMutableDictionary *_physicalDevices;
}

@property (weak) id<_GCLogicalDeviceRegistry> deviceRegistry;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<_GCPhysicalDeviceRegistry> deviceRegistry;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;

- (id)makeDeviceWithConfiguration:(id)a0 dependencies:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)a0;
- (BOOL)acceptDriverConnection:(id)a0 forHIDService:(id)a1;
- (BOOL)acceptFilterConnection:(id)a0 forHIDService:(id)a1;
- (void)claimHIDService:(id)a0;
- (id)matchHIDService:(id)a0;
- (void)relinquishHIDService:(id)a0;
- (id)serviceFor:(id)a0 client:(id)a1;
- (void)_onioqueue_setupHIDMatching;

@end
