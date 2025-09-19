@class NSString, NFNote, NSURL, NSImage, NSManagedObjectContext;

@interface NFAttachment : NSManagedObject <ICLegacyAttachment, ICAttachmentObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *identifierURIPathComponent;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *typeUTI;
@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, copy, nonatomic) NSURL *cidURL;
@property (readonly, nonatomic) BOOL isHiddenFromIndexing;
@property (readonly, nonatomic) BOOL isHiddenFromSearch;
@property (readonly, nonatomic) BOOL isDeletedOrInTrash;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *primitiveContentID;
@property (copy, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NFNote *note;
@property (readonly, weak) NSURL *cidURL;
@property (readonly, weak) NSString *filename;
@property (readonly, weak) NSString *mimeType;
@property (readonly, weak) NSImage *icon;

+ (id)keyPathsForValuesAffectingIcon;
+ (id)attachmentWithContentID:(id)a0 inNote:(id)a1 context:(id)a2;
+ (id)keyPathsForValuesAffectingCidURL;
+ (id)keyPathsForValuesAffectingFilename;

- (BOOL)persistAttachmentData:(id)a0 error:(id *)a1;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (id)compactDescription;
- (id)initWithFilename:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (BOOL)validateFileURL:(inout id *)a0 error:(out id *)a1;

@end
