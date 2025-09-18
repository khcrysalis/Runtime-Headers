@class NSString, NSDictionary, NSDate;

@interface NTPBPersonalizationAggregate : PBCodable <FCPersonalizationAggregate, FCMutablePersonalizationAggregate, NSCopying> {
    struct { unsigned char clicks : 1; unsigned char eventCount : 1; unsigned char impressions : 1; unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) NSString *featureKey;
@property (readonly, nonatomic) double clicks;
@property (readonly, nonatomic) double impressions;
@property (readonly, nonatomic) unsigned long long eventCount;
@property (readonly, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) double ctr;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasFeatureKey;
@property (retain, nonatomic) NSString *featureKey;
@property (nonatomic) BOOL hasClicks;
@property (nonatomic) double clicks;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) double impressions;
@property (nonatomic) BOOL hasEventCount;
@property (nonatomic) unsigned long long eventCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (double)_personalizationValueWithBaselineClicks:(double)a0 baselineImpressions:(double)a1 decayRate:(double)a2 baselineClicksMultiplier:(double)a3;
- (double)personalizationValueWithBaseline:(id)a0 decayRate:(double)a1;
- (double)personalizationValueWithBaseline:(id)a0 decayRate:(double)a1 baselineClicksMultiplier:(double)a2;
- (double)personalizationValueWithCorrelatedAggregate:(id)a0 baseline:(id)a1 decayRate:(double)a2 baselineClicksMultiplier:(double)a3;
- (double)powerWithDecayFactor:(double)a0;
- (double)relativePersonalizationValueWithCorrelatedAggregate:(id)a0 baseline:(id)a1 decayFactor:(double)a2 baselineClicksMultiplier:(double)a3;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
