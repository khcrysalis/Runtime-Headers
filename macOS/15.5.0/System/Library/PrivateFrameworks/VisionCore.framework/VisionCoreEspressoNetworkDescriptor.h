@class NSURL;

@interface VisionCoreEspressoNetworkDescriptor : VisionCoreInferenceNetworkDescriptor

@property (readonly, nonatomic) NSURL *ANESpecificURL;

- (id)URLForComputeDevice:(id)a0 error:(id *)a1;
- (id)modelPathForComputeDevice:(id)a0 error:(id *)a1;

@end
