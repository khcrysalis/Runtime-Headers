@class SAIntentGroupSiriKitMetrics, NSString, NSArray, NSData, SASVSystemDialogActOutput;

@interface SARDNativeFlowContextUpdate : SABaseCommand <AFContextSnapshot, SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *applicationContext;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSArray *clientFlowUpdateContextList;
@property (copy, nonatomic) NSData *pegasusConversationContext;
@property (copy, nonatomic) NSData *promptContextProto;
@property (nonatomic) BOOL resetFlowTaskState;
@property (retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (retain, nonatomic) SASVSystemDialogActOutput *systemDialogActOutput;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithSerializedBackingStore:(id)a0;
- (id)serializedBackingStore;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
