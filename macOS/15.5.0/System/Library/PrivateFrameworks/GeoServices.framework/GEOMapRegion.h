@class NSMutableArray, PBUnknownFields;

@interface GEOMapRegion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _eastLng;
    double _northLat;
    double _southLat;
    NSMutableArray *_vertexs;
    double _westLng;
    int _mapRegionSourceType;
    struct { unsigned char has_eastLng : 1; unsigned char has_northLat : 1; unsigned char has_southLat : 1; unsigned char has_westLng : 1; unsigned char has_mapRegionSourceType : 1; } _flags;
}

@property (readonly, nonatomic) double centerLat;
@property (readonly, nonatomic) double centerLng;
@property (readonly, nonatomic) double spanLat;
@property (readonly, nonatomic) double spanLng;
@property (readonly, nonatomic) BOOL hasRectangleVertices;
@property (nonatomic) BOOL hasSouthLat;
@property (nonatomic) double southLat;
@property (nonatomic) BOOL hasWestLng;
@property (nonatomic) double westLng;
@property (nonatomic) BOOL hasNorthLat;
@property (nonatomic) double northLat;
@property (nonatomic) BOOL hasEastLng;
@property (nonatomic) double eastLng;
@property (retain, nonatomic) NSMutableArray *vertexs;
@property (nonatomic) BOOL hasMapRegionSourceType;
@property (nonatomic) int mapRegionSourceType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)_mapkit_mapRegionEnclosingAnnotations:(id)a0;
+ (id)_mapkit_mapRegionForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (id)_mapkit_mapRegionForLatitude:(double)a0 longitude:(double)a1 latSpan:(double)a2 longSpan:(double)a3;
+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (BOOL)isValid:(id)a0;
+ (Class)vertexType;

- (id)_initWithCircularRegion:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)containsRegion:(id)a0;
- (BOOL)intersectsRegion:(id)a0;
- (id)vertexAtIndex:(unsigned long long)a0;
- (void)addVertex:(id)a0;
- (BOOL)containsCoordinate:(struct { double x0; double x1; })a0;
- (id)coordinates;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (int)StringAsMapRegionSourceType:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearVertexs;
- (BOOL)containsCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1;
- (BOOL)containsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithJSON:(id)a0;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithRadialPlace:(id)a0;
- (id)intersectionsOnPolyline:(id)a0;
- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)jsonRepresentation;
- (id)mapRegionSourceTypeAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (void)setMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (unsigned long long)vertexsCount;

@end
