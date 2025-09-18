@interface IMTransferServicesController : NSObject

+ (id)sharedInstance;

- (BOOL)failTransfersOnPreviewGenerationFailure;
- (void)generatePreviewForTransfer:(id)a0 attachmentPath:(id)a1 balloonBundleID:(id)a2 senderContext:(id)a3 completionBlock:(id /* block */)a4;
- (void)receiveFileTransfer:(id)a0 transferGUID:(id)a1 topic:(id)a2 path:(id)a3 requestURLString:(id)a4 ownerID:(id)a5 signature:(id)a6 decryptionKey:(id)a7 fileSize:(unsigned long long)a8 balloonBundleID:(id)a9 senderContext:(id)a10 progressBlock:(id /* block */)a11 completionBlock:(id /* block */)a12;
- (id)transferServicesController;
- (void)deleteAllPersonalNicknamesWithCompletion:(id /* block */)a0;
- (void)getNicknameWithRecordID:(id)a0 decryptionKey:(id)a1 wallpaperDataTag:(id)a2 wallpaperLowResDataTag:(id)a3 wallpaperMetadataTag:(id)a4 isKnownSender:(BOOL)a5 completionBlock:(id /* block */)a6;
- (void)getNicknameWithRecordID:(id)a0 decryptionKey:(id)a1 wallpaperDataTag:(id)a2 wallpaperLowResDataTag:(id)a3 wallpaperMetadataTag:(id)a4 isKnownSender:(BOOL)a5 shouldDecodeImageFields:(BOOL)a6 completionBlock:(id /* block */)a7;
- (void)receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 decryptionKey:(id)a6 fileSize:(unsigned long long)a7 progressBlock:(id /* block */)a8 completionBlock:(id /* block */)a9;
- (void)sendFilePath:(id)a0 topic:(id)a1 userInfo:(id)a2 transferID:(id)a3 encryptFile:(BOOL)a4 progressBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)setPersonalNickname:(id)a0 oldRecordID:(id)a1 completionBlockWithWallpaperTags:(id /* block */)a2;
- (void)_receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 sourceAppID:(id)a5 signature:(id)a6 decryptionKey:(id)a7 retries:(int)a8 fileSize:(unsigned long long)a9 progressBlock:(id /* block */)a10 completionBlock:(id /* block */)a11;
- (void)_sendFilePath:(id)a0 topic:(id)a1 userInfo:(id)a2 transferID:(id)a3 sourceAppID:(id)a4 encryptFile:(BOOL)a5 retries:(int)a6 progressBlock:(id /* block */)a7 completionBlock:(id /* block */)a8;
- (void)cancelSendTransferID:(id)a0;
- (void)getNicknameWithRecordID:(id)a0 decryptionKey:(id)a1 completionBlock:(id /* block */)a2;
- (void)getNicknameWithRecordID:(id)a0 decryptionKey:(id)a1 wallpaperDataTag:(id)a2 wallpaperLowResDataTag:(id)a3 wallpaperMetadataTag:(id)a4 completionBlock:(id /* block */)a5;
- (void)preWarmMMCSForOwnerID:(id)a0;
- (void)receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 sourceAppID:(id)a5 signature:(id)a6 decryptionKey:(id)a7 fileSize:(unsigned long long)a8 progressBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (void)sendFilePath:(id)a0 topic:(id)a1 transferID:(id)a2 encryptFile:(BOOL)a3 progressBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)sendFilePath:(id)a0 topic:(id)a1 userInfo:(id)a2 transferID:(id)a3 sourceAppID:(id)a4 encryptFile:(BOOL)a5 progressBlock:(id /* block */)a6 completionBlock:(id /* block */)a7;
- (void)setPersonalNickname:(id)a0 oldRecordID:(id)a1 completionBlock:(id /* block */)a2;

@end
