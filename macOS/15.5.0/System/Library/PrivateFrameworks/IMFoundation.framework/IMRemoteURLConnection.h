@class NSString, NSURLRequest, IMURLRequestSession;

@interface IMRemoteURLConnection : NSObject <FTMessageDeliveryRemoteURLConnection>

@property BOOL requireIDSHost;
@property BOOL forceCellularIfPossible;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property BOOL shouldUsePipelining;
@property int concurrentConnections;
@property BOOL disableKeepAlive;
@property int keepAliveWifi;
@property int keepAliveCell;
@property BOOL shouldReturnTimingData;
@property (retain) NSURLRequest *request;
@property (copy) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL loading;
@property (retain, nonatomic) IMURLRequestSession *URLSession;
@property BOOL requireIDSHost;
@property BOOL forceCellularIfPossible;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property BOOL shouldUsePipelining;
@property int concurrentConnections;
@property BOOL disableKeepAlive;
@property int keepAliveWifi;
@property int keepAliveCell;
@property BOOL shouldReturnTimingData;
@property (retain) NSURLRequest *request;
@property (copy) id /* block */ block;

- (void)dealloc;
- (void)load;
- (void).cxx_destruct;
- (void)cancel;
- (void)_direct_cancel;
- (void)_direct_load;
- (id)initWithURLRequest:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithURLRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;

@end
