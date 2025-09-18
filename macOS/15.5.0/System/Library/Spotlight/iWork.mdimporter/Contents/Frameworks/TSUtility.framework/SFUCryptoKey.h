@class NSArray, NSString, NSData;

@interface SFUCryptoKey : NSObject <TSPMutableCryptoInfo> {
    unsigned int mIterationCount;
    char *mKey;
    unsigned long long mKeyLength;
    NSData *mSaltData;
}

@property (readonly, nonatomic) SFUCryptoKey *cryptoKey;
@property (readonly, nonatomic) unsigned long long preferredBlockSize;
@property (readonly, nonatomic) NSArray *blockInfos;
@property (readonly, nonatomic) BOOL hasDecodedLength;
@property (readonly, nonatomic) unsigned long long decodedLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *passphrase;

- (void)reset;
- (void)addBlockInfo:(id)a0;
- (void)incrementDecodedLengthBy:(unsigned long long)a0;
- (id)mutableCryptoInfoCopy;
- (void)dealloc;
- (const char *)keyData;
- (int)keyType;
- (unsigned int)iterationCount;
- (id)initAes128Key:(const char *)a0 length:(unsigned int)a1 iterationCount:(unsigned int)a2;
- (id)initAes128KeyFromPassphrase:(id)a0 iterationCount:(unsigned int)a1;
- (id)initAes128KeyFromPassphrase:(id)a0 iterationCount:(unsigned int)a1 saltData:(id)a2;
- (id)initAes128KeyFromPassphrase:(const char *)a0 length:(unsigned int)a1 iterationCount:(unsigned int)a2;
- (id)initAes128KeyFromPassphrase:(const char *)a0 length:(unsigned int)a1 iterationCount:(unsigned int)a2 saltData:(id)a3;
- (id)initAes128KeyFromPassphrase:(id)a0 withIterationCountAndSaltDataFromCryptoKey:(id)a1;
- (unsigned long long)keyLength;
- (id)saltData;

@end
