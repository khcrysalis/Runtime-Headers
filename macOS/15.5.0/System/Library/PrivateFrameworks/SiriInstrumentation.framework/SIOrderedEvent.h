@class SISchemaTopLevelUnionType, NSString, NSUUID, SILogicalTimestamp, SIOrderedEventInternal;

@interface SIOrderedEvent : NSObject <BMStoreData, BMStoreData> {
    SIOrderedEventInternal *_underlying;
    SILogicalTimestamp *_underlyingTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SILogicalTimestamp *logicalTimestamp;
@property (readonly, nonatomic) SISchemaTopLevelUnionType *topLevelUnionType;
@property (readonly, nonatomic) NSUUID *messageUUID;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)deserializeFromData:(id)a0;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0;
- (id)serialize;
- (id)initWithInternalType:(id)a0;
- (id)initWithTimestamp:(id)a0 messageUUID:(id)a1 topLevelUnionType:(id)a2;

@end
