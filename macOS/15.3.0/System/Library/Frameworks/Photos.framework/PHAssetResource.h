@class PLPhotoLibraryPathManagerIdentifier, PHAsset, NSString, NSURL, PHPhotoLibrary, NSDate, NSManagedObjectID;
@protocol PLResourceIdentity;

@interface PHAssetResource : NSObject <PHCPLAssetResource> {
    unsigned long long _fileSize;
    NSDate *_trashedDate;
    BOOL _trashed;
    BOOL _inCloud;
    PHPhotoLibrary *_photoLibrary;
    id /* block */ _privateFileLoader;
}

@property (readonly, nonatomic) NSURL *privateFileURL;
@property (readonly, copy, nonatomic) id /* block */ privateFileLoader;
@property (readonly, nonatomic) long long analysisType;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic, getter=isLocallyAvailable) BOOL locallyAvailable;
@property (readonly, nonatomic, getter=isInCloud) BOOL inCloud;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) id<PLResourceIdentity> backingResourceIdentity;
@property (readonly, nonatomic) NSManagedObjectID *assetObjectID;
@property (readonly, nonatomic) unsigned short dataStoreClassID;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) unsigned long long cplResourceType;
@property (nonatomic, getter=isLocallyAvailable) BOOL locallyAvailable;
@property (retain, nonatomic) NSURL *privateFileURL;
@property (readonly, nonatomic, getter=isCurrent) BOOL current;
@property (readonly, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) long long pixelWidth;
@property (readonly, nonatomic) long long pixelHeight;

+ (BOOL)mad_disableComputeSyncDownload;
+ (id)vcp_allAcceptableResourcesForAsset:(id)a0;
+ (id)vcp_allResourcesForAsset:(id)a0;
+ (id)vcp_allowedBundlesForSyndicationLibrary;
+ (id /* block */)vcp_ascendingSizeComparator;
+ (id /* block */)vcp_descendingSizeComparator;
+ (id)_assetResourcesFromPLResources:(id)a0 includeMetadata:(BOOL)a1 mediaMetadataVirtualResources:(id)a2 asset:(id)a3 photoLibrary:(id)a4 assetHasAdjustments:(BOOL)a5 includeDerivatives:(BOOL)a6 includeAdjustmentOverflowDataBlob:(BOOL)a7;
+ (id)_resourcesForManagedAsset:(id)a0 includeDerivatives:(BOOL)a1;
+ (id)assetResourceForAsset:(id)a0 qualityClass:(id)a1;
+ (id)assetResourcesForAsset:(id)a0;
+ (id)assetResourcesForAsset:(id)a0 includeDerivatives:(BOOL)a1;
+ (id)assetResourcesForAsset:(id)a0 includeDerivatives:(BOOL)a1 includeMetadata:(BOOL)a2;
+ (id)assetResourcesForAsset:(id)a0 includeDerivatives:(BOOL)a1 includeMetadata:(BOOL)a2 includeAdjustmentOverflowDataBlob:(BOOL)a3;
+ (id)assetResourcesForAssets:(id)a0 includeDerivatives:(BOOL)a1 includeMetadata:(BOOL)a2 includeAdjustmentOverflowDataBlob:(BOOL)a3;
+ (id)assetResourcesForLivePhoto:(id)a0;
+ (id)computeSyncMediaAnalysisPayloadDataForResourceURL:(id)a0;

- (BOOL)vcp_isDecodable;
- (id)mad_existingAnalysisFromComputeSyncForAsset:(id)a0 allowDownload:(BOOL)a1 cancel:(id /* block */)a2;
- (BOOL)mad_isAnalysisCompleteFromComputeSyncForAsset:(id)a0 taskID:(unsigned long long)a1 allowDownload:(BOOL)a2 cancel:(id /* block */)a3;
- (id)vcp_avAsset;
- (unsigned long long)vcp_fileSize;
- (BOOL)vcp_hasExtremeAbnormalDimensionForScene;
- (BOOL)vcp_isLocallyAvailable;
- (BOOL)vcp_isMovie;
- (BOOL)vcp_isPhoto;
- (BOOL)vcp_isPhotoResourceUsable:(BOOL)a0;
- (BOOL)vcp_isVideoResourceUsable:(BOOL)a0;
- (struct CGSize { double x0; double x1; })vcp_size;
- (id)vcp_uniformTypeIdentifier;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithResource:(id)a0 asset:(id)a1 hasAdjustments:(BOOL)a2 photoLibrary:(id)a3;
- (id)initWithType:(long long)a0 livePhoto:(id)a1;

@end
