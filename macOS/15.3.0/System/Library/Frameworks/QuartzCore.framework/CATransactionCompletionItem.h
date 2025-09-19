@class NSString;

@interface CATransactionCompletionItem : NSObject <NSAnimationContextCompletionHandlerSuspension> {
    void *_priv;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)completionItem;

- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
