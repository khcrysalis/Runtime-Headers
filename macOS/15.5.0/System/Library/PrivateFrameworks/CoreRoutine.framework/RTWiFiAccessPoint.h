@class NSString, NSDate;

@interface RTWiFiAccessPoint : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *mac;
@property (readonly, nonatomic) long long rssi;
@property (readonly, nonatomic) long long channel;
@property (readonly, nonatomic) double age;
@property (readonly, nonatomic) NSDate *date;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithWiFiAccessPointMO:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithFirstJSONDictionary:(id)a0;
- (id)initWithMac:(id)a0 rssi:(long long)a1 channel:(long long)a2 age:(double)a3 date:(id)a4;
- (id)outputToDictionary;
- (id)outputToFirstJSONDictionary;

@end
