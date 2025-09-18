@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICInAppMessageMetadataEntry : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_metadataValues;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numberOfDisplays;
@property (nonatomic) BOOL didCancelUserNotification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allMetadataValues;
- (id)metadataValueForKey:(id)a0;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;

@end
