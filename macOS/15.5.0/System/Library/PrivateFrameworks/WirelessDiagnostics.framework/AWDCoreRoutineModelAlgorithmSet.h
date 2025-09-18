@class NSString, NSMutableArray;

@interface AWDCoreRoutineModelAlgorithmSet : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *instances;

+ (Class)instanceType;

- (id)_init;
- (long long)metricId;
- (BOOL)valid:(id *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addInstance:(id)a0;
- (unsigned long long)instancesCount;
- (void)clearInstances;
- (id)instanceAtIndex:(unsigned long long)a0;

@end
