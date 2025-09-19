@class NSArray;

@interface MLCReshapeLayer : MLCLayer

@property (readonly, copy, nonatomic) NSArray *shape;

+ (id)flattenLayerWithTensor:(id)a0 flattenParams:(const void *)a1 batchSize:(unsigned long long)a2 error:(id *)a3;
+ (id)reshapeLayer:(const void *)a0 batchSize:(unsigned long long)a1 error:(id *)a2;
+ (id)reshapeStaticLayer:(const void *)a0 batchSize:(unsigned long long)a1 error:(id *)a2;
+ (id)layerWithShape:(id)a0;
+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithShape:(id)a0;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (unsigned long long)deviceMemorySizeForForward;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)a0 device:(id)a1;
- (BOOL)isStaticBatchSize;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
