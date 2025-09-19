@class CSUSceneNetV5SceneTaxonomyAttributes;

@interface CSUSceneNetV5SceneTaxonomy : CSUTaxonomy {
    CSUSceneNetV5SceneTaxonomyAttributes *_attributeManager;
}

- (BOOL)VNGetClassificationMetrics:(id *)a0 forLabel:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)attributesForLabel:(id)a0 error:(id *)a1;
- (id)initWithManifestPath:(id)a0 error:(id *)a1;

@end
