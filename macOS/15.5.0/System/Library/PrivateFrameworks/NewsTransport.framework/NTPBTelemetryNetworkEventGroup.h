@class NSString, FCNetworkEventStats, NSDate, NSMutableArray;

@interface NTPBTelemetryNetworkEventGroup : PBCodable <NSCopying> {
    struct { unsigned char cellularRadioAccessTechnology : 1; unsigned char eventType : 1; unsigned char wifiReachabilityStatus : 1; } _has;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) FCNetworkEventStats *totalDurationStats;
@property (readonly, nonatomic) FCNetworkEventStats *dnsDurationStats;
@property (readonly, nonatomic) FCNetworkEventStats *connectDurationStats;
@property (readonly, nonatomic) FCNetworkEventStats *timeToFirstByteStats;
@property (readonly, nonatomic) unsigned long long cacheHitCount;
@property (readonly, nonatomic) unsigned long long cacheMissCount;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasWifiReachabilityStatus;
@property (nonatomic) BOOL wifiReachabilityStatus;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;
@property (readonly, nonatomic) BOOL hasRespondingPop;
@property (retain, nonatomic) NSString *respondingPop;
@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)failuresType;
+ (Class)successesType;

- (int)pbCellularRadioAccessTechnology;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)failuresCount;
- (void)addFailures:(id)a0;
- (void)clearFailures;
- (id)failuresAtIndex:(unsigned long long)a0;
- (int)StringAsCellularRadioAccessTechnology:(id)a0;
- (void)addSuccesses:(id)a0;
- (id)cellularRadioAccessTechnologyAsString:(int)a0;
- (void)clearSuccesses;
- (id)successesAtIndex:(unsigned long long)a0;
- (unsigned long long)successesCount;

@end
