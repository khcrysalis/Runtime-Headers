@class AFDisambiguationInfo, NSArray, NSData, NSString;

@interface SAUIDisambiguationGroup : SAAceView <AFDisambiguationAssistancePrivate, SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *af_disambiguationIdentifier;
@property (retain, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;
@property (copy, nonatomic) NSArray *disambiguationLists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)disambiguationGroup;
+ (id)disambiguationGroupWithDictionary:(id)a0 context:(id)a1;

- (id)af_assistedSelectionItem;
- (id)af_indexIdentifierForItem:(id)a0;
- (id)af_itemForIndexIdentifier:(id)a0;
- (void)af_saveItemSelection:(id)a0 forType:(long long)a1;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
