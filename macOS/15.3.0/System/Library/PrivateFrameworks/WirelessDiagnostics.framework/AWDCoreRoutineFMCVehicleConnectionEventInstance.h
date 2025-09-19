@class NSString;

@interface AWDCoreRoutineFMCVehicleConnectionEventInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventType : 1; unsigned char value : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) int value;

- (id)_init;
- (long long)metricId;
- (BOOL)valid:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
