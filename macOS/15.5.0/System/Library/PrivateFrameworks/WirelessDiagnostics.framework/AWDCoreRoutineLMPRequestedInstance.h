@class NSString;

@interface AWDCoreRoutineLMPRequestedInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char confidence : 1; unsigned char occurrences : 1; unsigned char reason : 1; unsigned char suggested : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) BOOL hasSuggested;
@property (nonatomic) BOOL suggested;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL hasOccurrences;
@property (nonatomic) int occurrences;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;

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
