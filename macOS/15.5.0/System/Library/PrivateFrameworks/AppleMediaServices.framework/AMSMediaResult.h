@class NSDictionary, NSArray;

@interface AMSMediaResult : AMSURLResult

@property (readonly) NSDictionary *responseDictionary;
@property (readonly) NSArray *responseDataItems;

- (id)fc_subscriptionPeriodInISO_8601;
- (id)fc_appAdamID;
- (id)fc_bundleID;
- (id)fc_externalVersionID;
- (id)fc_introductoryOffers;
- (id)fc_offerName;
- (BOOL)isPeriodValid:(id)a0;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;

@end
