@class CNManagedConfiguration, NSObject, CNContactsEnvironment;
@protocol OS_tcc_identity;

@interface CNContactStoreConfiguration : NSObject

@property (retain, nonatomic) CNContactsEnvironment *environment;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (nonatomic) BOOL isContactProvider;
@property (nonatomic) BOOL leaveSingleStoresUnwrapped;
@property (nonatomic) BOOL includeLocalContacts;
@property (nonatomic) BOOL includeSuggestedContacts;
@property (nonatomic) BOOL includeDonatedContacts;
@property (nonatomic) BOOL includeIncludeManagedAppleIDs;
@property (nonatomic) BOOL includeSharedPhotoContacts;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic) BOOL useOutOfProcessMapperExclusively;
@property (nonatomic) BOOL useInProcessMapperExclusively;

+ (id)tu_contactStoreConfigurationForBundleIdentifier:(id)a0;
+ (id)tu_contactStoreConfigurationForCall:(id)a0;
+ (id)tu_contactStoreConfigurationForConversation:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
