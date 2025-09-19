@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _events;
    struct { unsigned char defaultClicks : 1; unsigned char defaultImpressions : 1; unsigned char groupBias : 1; unsigned char impressionBias : 1; unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFeatureKey;
@property (retain, nonatomic) NSString *featureKey;
@property (nonatomic) BOOL hasDefaultClicks;
@property (nonatomic) double defaultClicks;
@property (nonatomic) BOOL hasDefaultImpressions;
@property (nonatomic) double defaultImpressions;
@property (readonly, nonatomic) unsigned long long eventsCount;
@property (readonly, nonatomic) unsigned int *events;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasImpressionBias;
@property (nonatomic) double impressionBias;
@property (nonatomic) BOOL hasGroupBias;
@property (nonatomic) double groupBias;

+ (void)fc_swizzleFor24117796;

- (BOOL)applyToAggregate:(id)a0 withTreatment:(id)a1;
- (void)addAction:(unsigned long long)a0 count:(unsigned long long)a1;
- (void)applyToDelta:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEvents:(unsigned int)a0;
- (void)clearEvents;
- (unsigned int)eventsAtIndex:(unsigned long long)a0;
- (void)setEvents:(unsigned int *)a0 count:(unsigned long long)a1;

@end
