@class NSString;

@interface AWDCoreRoutineFMCCarParkedInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char horizontalAccuracy : 1; unsigned char locationType : 1; unsigned char qualityIndicator : 1; unsigned char triggerTypes : 1; unsigned char userAssistanceRequired : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasParkingId;
@property (retain, nonatomic) NSString *parkingId;
@property (nonatomic) BOOL hasTriggerTypes;
@property (nonatomic) int triggerTypes;
@property (nonatomic) BOOL hasUserAssistanceRequired;
@property (nonatomic) BOOL userAssistanceRequired;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) int horizontalAccuracy;
@property (nonatomic) BOOL hasQualityIndicator;
@property (nonatomic) int qualityIndicator;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;

- (id)_init;
- (long long)metricId;
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

@end
