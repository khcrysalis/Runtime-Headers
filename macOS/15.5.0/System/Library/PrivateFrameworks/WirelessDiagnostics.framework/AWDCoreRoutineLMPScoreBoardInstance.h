@class NSString;

@interface AWDCoreRoutineLMPScoreBoardInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {
    struct { unsigned char corrects : 1; unsigned char incorrects : 1; unsigned char invalids : 1; unsigned char unknowns : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasKeyword;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) BOOL hasCorrects;
@property (nonatomic) int corrects;
@property (nonatomic) BOOL hasIncorrects;
@property (nonatomic) int incorrects;
@property (nonatomic) BOOL hasUnknowns;
@property (nonatomic) int unknowns;
@property (nonatomic) BOOL hasInvalids;
@property (nonatomic) int invalids;

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
