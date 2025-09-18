@class NSString, NSArray, NSDictionary, NSData;

@interface VSKAsset : NSObject

@property (readonly, nonatomic) NSString *mad_photosLocalIdentifier;
@property (readonly, nonatomic) BOOL mad_hasImageEmbedding;
@property (readonly, nonatomic) BOOL mad_hasVideoEmbedding;
@property (copy, nonatomic) NSString *stringIdentifier;
@property (copy, nonatomic) NSArray *vectors;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSArray *perVectorAttribute;
@property (copy, nonatomic) NSData *payload;

+ (id)mad_attributesWithEmbeddingVersion:(unsigned long long)a0;
+ (id)mad_embeddingTypeFilter:(unsigned long long)a0;
+ (id)mad_fetchEmbeddingForPhotosAsset:(id)a0 embeddingType:(unsigned long long)a1;
+ (id)mad_fetchImageEmbeddingForPhotosAsset:(id)a0;
+ (id)mad_fetchVideoEmbeddingForPhotosAsset:(id)a0;
+ (id)mad_imageAssetWithLocalIdentifier:(id)a0 mediaAnalysisResults:(id)a1 error:(id *)a2;
+ (id)mad_localIdentifierFromStringIdentifier:(id)a0;
+ (id)mad_stringIdentifierFromLocalIdentifier:(id)a0 embeddingType:(unsigned long long)a1;
+ (id)mad_stringIdentifierPostfixForEmbeddingType:(unsigned long long)a0;
+ (id)mad_stringIdentifiersFromLocalIdentifiers:(id)a0;
+ (id)mad_videoAssetWithLocalIdentifier:(id)a0 mediaAnalysisResults:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithStringIdentifier:(id)a0 vectors:(id)a1 attributes:(id)a2 payload:(id)a3;
- (id)initWithStringIdentifier:(id)a0 vectors:(id)a1 perVectorAttribute:(id)a2 payload:(id)a3;

@end
