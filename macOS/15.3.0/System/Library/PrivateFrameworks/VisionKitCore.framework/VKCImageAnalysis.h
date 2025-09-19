@class NSArray, NSString;

@interface VKCImageAnalysis : VKImageAnalysis <PXVKImageAnalysis>

@property (readonly, nonatomic) BOOL hasTexts;
@property (readonly, nonatomic) BOOL hasDataDetectors;
@property (readonly, nonatomic) BOOL hasVisualSearchResults;
@property (readonly, nonatomic) NSArray *resultItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasResultsForPXVKAnalysisTypes:(unsigned long long)a0;

@end
