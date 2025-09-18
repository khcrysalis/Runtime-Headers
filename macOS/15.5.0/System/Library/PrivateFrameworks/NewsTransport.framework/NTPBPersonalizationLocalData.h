@class NSString, NSDictionary, NSData, CKRecord, NSMutableArray;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying>

@property (readonly, nonatomic) NSDictionary *openChangeGroupDeltasByFeatureKey;
@property (retain, nonatomic) CKRecord *remoteRecord;
@property (retain, nonatomic) NSMutableArray *openChangeGroupDeltas;
@property (retain, nonatomic) NSMutableArray *closedChangeGroups;
@property (readonly, nonatomic) BOOL hasRemoteRecordData;
@property (retain, nonatomic) NSData *remoteRecordData;
@property (readonly, nonatomic) BOOL hasCurrentInstanceIdentifier;
@property (retain, nonatomic) NSString *currentInstanceIdentifier;
@property (retain, nonatomic) NSMutableArray *aggregates;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)a0;
+ (Class)aggregatesType;
+ (Class)closedChangeGroupsType;
+ (Class)openChangeGroupDeltasType;

- (void)writeToKeyValuePair:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)aggregatesCount;
- (void)clearAggregates;
- (void)addAggregates:(id)a0;
- (void)addClosedChangeGroups:(id)a0;
- (void)addOpenChangeGroupDeltas:(id)a0;
- (id)aggregatesAtIndex:(unsigned long long)a0;
- (void)clearClosedChangeGroups;
- (void)clearOpenChangeGroupDeltas;
- (id)closedChangeGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)closedChangeGroupsCount;
- (id)openChangeGroupDeltasAtIndex:(unsigned long long)a0;
- (unsigned long long)openChangeGroupDeltasCount;

@end
