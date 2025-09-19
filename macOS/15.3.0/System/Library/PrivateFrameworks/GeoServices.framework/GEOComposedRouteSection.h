@class GEOComposedRouteStep, GEOComposedRouteSegment;

@interface GEOComposedRouteSection : NSObject {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _overlayBounds;
}

@property (readonly, nonatomic) struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; } vkBounds;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) struct GeoCodecsVectorTilePoint3D { float x0; float x1; float x2; } *points;
@property (readonly, nonatomic) struct { struct { double x; double y; double z; } origin; struct { double width; double height; double depth; } size; } bounds;
@property (readonly, weak, nonatomic) GEOComposedRouteSegment *composedRouteSegment;
@property (readonly, weak, nonatomic) GEOComposedRouteStep *composedRouteStep;
@property (readonly, nonatomic) unsigned long long composedRouteSegmentIndex;
@property (readonly, nonatomic) unsigned long long finalStepIndex;
@property (readonly, nonatomic) double startDistance;
@property (nonatomic) double lengthScaleFactor;
@property (readonly, nonatomic) int transportType;

- (id)pathsForRenderRegion:(id)a0 inOverlay:(id)a1 elevationSource:(void *)a2 elevationSourceContext:(void *)a3;
- (id)pathsForRenderRegion:(id)a0 inOverlay:(id)a1 excludedSegments:(const void *)a2 elevationSource:(void *)a3 elevationSourceContext:(void *)a4;
- (id)pathsForRenderRegion:(id)a0 inOverlay:(id)a1 shouldSnapToTransit:(BOOL)a2 verifySnapping:(BOOL)a3 elevationSource:(void *)a4 elevationSourceContext:(void *)a5;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)stringForPoints;
- (BOOL)_MapsCarPlay_isEqual:(id)a0;
- (void)_initialStepInSteps:(id)a0;
- (id)initWithCoordinates:(id)a0 segment:(id)a1 segmentIndex:(unsigned long long)a2 steps:(id)a3 startCoordinateIndex:(unsigned int)a4 coordinateCount:(unsigned int)a5 bounds:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; })a6 transportType:(int)a7 finalStepIndex:(unsigned long long)a8 startDistance:(double)a9 lengthScaleFactor:(double)a10;
- (id)initWithCoordinates:(id)a0 segment:(id)a1 segmentIndex:(unsigned long long)a2 steps:(id)a3 startCoordinateIndex:(unsigned int)a4 coordinateCount:(unsigned int)a5 transportType:(int)a6 finalStepIndex:(unsigned long long)a7 fallbackStartCoordinate:(struct { double x0; double x1; })a8 fallbackEndCoordinate:(struct { double x0; double x1; })a9 startDistance:(double)a10 lengthScaleFactor:(double)a11;
- (BOOL)isTransfer;
- (id)stringForCoordinates;

@end
