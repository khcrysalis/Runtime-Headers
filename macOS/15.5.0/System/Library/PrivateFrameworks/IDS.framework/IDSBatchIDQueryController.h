@class NSString, _IDSBatchIDQueryController;

@interface IDSBatchIDQueryController : NSObject <TUIDSBatchIDQueryController> {
    _IDSBatchIDQueryController *_internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setDestinations:(id)a0;
- (id)initWithService:(id)a0 delegate:(id)a1 queue:(id)a2;

@end
