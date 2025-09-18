@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOArrivalParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arrivalMapRegions;
    NSMutableArray *_arrivalPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _arrivalParametersEndOfRouteDistanceThreshold;
    unsigned int _endOfRouteDistanceThreshold;
    struct { unsigned char has_arrivalParametersEndOfRouteDistanceThreshold : 1; unsigned char has_endOfRouteDistanceThreshold : 1; unsigned char read_unknownFields : 1; unsigned char read_arrivalMapRegions : 1; unsigned char read_arrivalPoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasEndOfRouteDistanceThreshold;
@property (nonatomic) unsigned int endOfRouteDistanceThreshold;
@property (retain, nonatomic) NSMutableArray *arrivalPoints;
@property (retain, nonatomic) NSMutableArray *arrivalMapRegions;
@property (nonatomic) BOOL hasArrivalParametersEndOfRouteDistanceThreshold;
@property (nonatomic) unsigned int arrivalParametersEndOfRouteDistanceThreshold;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)arrivalMapRegionsType;
+ (Class)arrivalPointsType;
+ (BOOL)isValid:(id)a0;

- (BOOL)containsCoordinate:(struct { double x0; double x1; double x2; })a0 arrivalRegionType:(int)a1;
- (BOOL)containsLocation:(id)a0 arrivalRegionType:(int)a1;
- (BOOL)containsLocation:(id)a0 arrivalRegionType:(int)a1 parameters:(id)a2;
- (unsigned long long)regionContainmentTypeForLocation:(id)a0 arrivalRegionType:(int)a1 parameters:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addArrivalMapRegions:(id)a0;
- (void)addArrivalPoints:(id)a0;
- (id)arrivalMapRegionsAtIndex:(unsigned long long)a0;
- (unsigned long long)arrivalMapRegionsCount;
- (id)arrivalPointsAtIndex:(unsigned long long)a0;
- (unsigned long long)arrivalPointsCount;
- (void)clearArrivalMapRegions;
- (void)clearArrivalPoints;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
