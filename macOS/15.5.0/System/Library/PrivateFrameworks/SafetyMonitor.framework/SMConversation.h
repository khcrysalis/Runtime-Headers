@class NSString, NSArray;

@interface SMConversation : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *receiverHandles;
@property (readonly, nonatomic) NSArray *receiverPrimaryHandles;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isGroup;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithSMConversationMO:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)descriptionDictionary;
- (id)initWithReceiverHandles:(id)a0 identifier:(id)a1 displayName:(id)a2;
- (id)outputToDictionary;
- (BOOL)hasEqualPrimaryHandlesAsConversation:(id)a0;
- (BOOL)hasEqualPrimaryHandlesAsSet:(id)a0;

@end
