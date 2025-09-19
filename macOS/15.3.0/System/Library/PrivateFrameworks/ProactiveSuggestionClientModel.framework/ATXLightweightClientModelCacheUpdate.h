@class NSString, NSArray, NSUUID, NSDate;

@interface ATXLightweightClientModelCacheUpdate : NSObject <ATXPredictionCacheProtocol, BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *cacheCreationDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)date;
- (id)identifierForPredictionAtIndex:(unsigned long long)a0;
- (long long)confidenceCategoryForPredictionAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfPredictionsWithConfidence:(long long)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithClientModelCacheUpdate:(id)a0;
- (id)initWithClientModelId:(id)a0 suggestions:(id)a1 uuid:(id)a2 cacheCreationDate:(id)a3;
- (BOOL)isEqualToATXLightweightClientModelCacheUpdate:(id)a0;

@end
