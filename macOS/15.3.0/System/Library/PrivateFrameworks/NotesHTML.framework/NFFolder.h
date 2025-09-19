@class NSManagedObjectContext, NSString, NSArray, NSSet, NFAccount, NSManagedObjectID;
@protocol ICLegacyAccount, ICLegacyFolder;

@interface NFFolder : NSManagedObject <ICLegacyFolder>

@property (readonly, nonatomic) BOOL isRootFolder;
@property (readonly, nonatomic) id<ICLegacyAccount> account;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id<ICLegacyFolder> parentFolder;
@property (readonly, nonatomic) NSArray *ancestorFolders;
@property (readonly, nonatomic) long long depth;
@property (readonly, nonatomic) NSSet *changes;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) BOOL isDeletedOrInTrash;
@property (readonly, nonatomic) BOOL isDefaultFolder;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly, nonatomic) BOOL isCustomFolder;
@property (readonly, copy, nonatomic) NSString *identifierURIPathComponent;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NFAccount *primitiveAccount;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NFAccount *account;
@property (copy, nonatomic) NSSet *folders;
@property (copy, nonatomic) NSSet *notes;
@property (retain, nonatomic) NFFolder *parent;
@property (readonly, copy, nonatomic) NSArray *ancestors;
@property (readonly) BOOL isRemote;

+ (Class)noteClass;

- (long long)compare:(id)a0;
- (id)newNoteInContext:(id)a0;
- (BOOL)validateName:(inout id *)a0 error:(out id *)a1;
- (id)compactDescription;
- (id)newNote;
- (void)moveToTrash;
- (void)addNotesForChildFoldersToArray:(id)a0;
- (BOOL)_isSiblingWithSameNameAllowed:(id)a0;
- (BOOL)_siblingIsAllowedWithName:(id)a0 parent:(id)a1;
- (BOOL)containsNoteWithAttachment;
- (id)defaultNameForNewSubfolderWithName:(id)a0;
- (id)newSubfolderWithName:(id)a0;
- (id)notesIncludingChildFolders;
- (id)subfolderWithName:(id)a0;
- (void)takeValuesFromFolder:(id)a0;
- (BOOL)validateParent:(inout id *)a0 error:(out id *)a1;

@end
