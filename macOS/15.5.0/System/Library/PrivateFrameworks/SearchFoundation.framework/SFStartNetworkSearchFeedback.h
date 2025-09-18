@class NSString, NSDictionary, SFIndexState;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback <_CPStartFeedback>

@property (readonly, nonatomic) int endpointType;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) unsigned long long endpoint;
@property (nonatomic) unsigned long long rawRequestSize;
@property (nonatomic) unsigned long long compressedRequestSize;
@property (copy, nonatomic) NSString *experimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) SFIndexState *indexState;

+ (BOOL)supportsSecureCoding;

@end
