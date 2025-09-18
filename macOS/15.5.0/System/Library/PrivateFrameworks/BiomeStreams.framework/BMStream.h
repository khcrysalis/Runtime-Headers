@interface BMStream : BMStreamBase

- (id)atx_DSLPublisher;
- (id)atx_publisherWithStartDate:(id)a0 endDate:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)atx_publisherFromStartDate:(id)a0;
- (id)atx_publisherFromStartTime:(id)a0;
- (id)atx_dateOfLastEvent;
- (id)atx_publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)source;
- (id)publisher;
- (id)publisherWithUseCase:(id)a0 options:(id)a1;
- (id)publisherWithOptions:(id)a0;
- (id)pruner;
- (id)publisherWithUseCase:(id)a0;
- (id)sourceWithUser:(unsigned int)a0;
- (id)prunerForDevice:(id)a0;
- (id)publisherWithUser:(unsigned int)a0 useCase:(id)a1 options:(id)a2;

@end
