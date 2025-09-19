@class AFDisambiguationInfo, NSString, NSData, SAUIDomainObjectPicker, NSArray;

@interface SAUIDisambiguationList : SAAceView <AFDisambiguationAssistancePrivate>

@property (readonly, nonatomic) NSData *af_disambiguationIdentifier;
@property (retain, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;
@property (nonatomic) BOOL autoDisambiguationDisabled;
@property (copy, nonatomic) NSString *disambiguationKey;
@property (retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property (copy, nonatomic) NSArray *fallbackCommands;
@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *selectionResponse;
@property (copy, nonatomic) NSString *speakableDelimiter;
@property (copy, nonatomic) NSString *speakableFinalDelimiter;
@property (copy, nonatomic) NSString *speakableSelectionResponse;
@property (copy, nonatomic) NSString *speakableSuffix;
@property (copy, nonatomic) NSString *title;

+ (id)disambiguationList;
+ (id)disambiguationListWithDictionary:(id)a0 context:(id)a1;

- (id)af_assistedSelectionItem;
- (id)af_indexIdentifierForItem:(id)a0;
- (id)af_itemForIndexIdentifier:(id)a0;
- (void)af_saveItemSelection:(id)a0 forType:(long long)a1;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
