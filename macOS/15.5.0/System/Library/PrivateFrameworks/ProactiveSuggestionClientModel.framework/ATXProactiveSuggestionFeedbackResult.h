@class ATXClientModelCacheUpdate, ATXPredictionContext, ATXBlendingModelUICacheUpdate;
@protocol ATXProactiveSuggestionFeedbackContextProtocol;

@interface ATXProactiveSuggestionFeedbackResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXPredictionContext *predictionContext;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) long long sessionType;
@property (readonly, nonatomic) ATXClientModelCacheUpdate *clientCacheUpdate;
@property (readonly, nonatomic) ATXBlendingModelUICacheUpdate *uiCacheUpdate;
@property (readonly, nonatomic) id<ATXProactiveSuggestionFeedbackContextProtocol> context;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConsumerSubType:(unsigned char)a0 sessionType:(long long)a1 clientCacheUpdate:(id)a2 uiCacheUpdate:(id)a3 context:(id)a4;
- (id)validContextClassNames;

@end
