@class NSString, NSMutableArray;

@interface AWDCoreRoutineLearnedLocationTrainingMetrics : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {
    struct { unsigned char intervalSinceLastAttempt : 1; unsigned char latency : 1; unsigned char maxIntervalBetweenLocations : 1; unsigned char timestamp : 1; unsigned char locationsProcessed : 1; unsigned char placeCountDevice : 1; unsigned char placeCountTotal : 1; unsigned char visitCountDevice : 1; unsigned char visitCountTotal : 1; unsigned char trainedVisits : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTrainedVisits;
@property (nonatomic) BOOL trainedVisits;
@property (nonatomic) BOOL hasIntervalSinceLastAttempt;
@property (nonatomic) unsigned long long intervalSinceLastAttempt;
@property (nonatomic) BOOL hasLatency;
@property (nonatomic) unsigned long long latency;
@property (nonatomic) BOOL hasLocationsProcessed;
@property (nonatomic) unsigned int locationsProcessed;
@property (nonatomic) BOOL hasMaxIntervalBetweenLocations;
@property (nonatomic) unsigned long long maxIntervalBetweenLocations;
@property (retain, nonatomic) NSMutableArray *visits;
@property (retain, nonatomic) NSMutableArray *places;
@property (nonatomic) BOOL hasVisitCountDevice;
@property (nonatomic) unsigned int visitCountDevice;
@property (nonatomic) BOOL hasVisitCountTotal;
@property (nonatomic) unsigned int visitCountTotal;
@property (nonatomic) BOOL hasPlaceCountDevice;
@property (nonatomic) unsigned int placeCountDevice;
@property (nonatomic) BOOL hasPlaceCountTotal;
@property (nonatomic) unsigned int placeCountTotal;

+ (Class)placesType;
+ (Class)visitsType;

- (id)_init;
- (long long)metricId;
- (id)initWithLearnedLocationEngineMetrics:(id)a0;
- (BOOL)valid:(id *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addVisits:(id)a0;
- (unsigned long long)visitsCount;
- (void)clearPlaces;
- (unsigned long long)placesCount;
- (void)addPlaces:(id)a0;
- (void)clearVisits;
- (id)placesAtIndex:(unsigned long long)a0;
- (id)visitsAtIndex:(unsigned long long)a0;

@end
