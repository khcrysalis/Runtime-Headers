@class NSMutableArray;

@interface SIRINLUEXTERNALUtteranceAlignment : PBCodable <NSCopying> {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char nodeIndex : 1; } _has;
}

@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) unsigned int asrHypothesisIndex;
@property (retain, nonatomic) NSMutableArray *spans;
@property (nonatomic) BOOL hasNodeIndex;
@property (nonatomic) unsigned int nodeIndex;

+ (BOOL)subset:(id)a0 of:(id)a1;
+ (Class)spansType;

- (long long)compareStartAndSize:(id)a0;
- (BOOL)equalIndexes:(id)a0;
- (unsigned int)getEndIndex;
- (unsigned int)getStartIndex;
- (BOOL)overlaps:(id)a0;
- (BOOL)subsumedBy:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSpans;
- (unsigned long long)spansCount;
- (void)addSpans:(id)a0;
- (id)spansAtIndex:(unsigned long long)a0;

@end
