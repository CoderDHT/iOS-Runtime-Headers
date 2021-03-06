/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPManager : NSObject <NEAppProxyProviderContainerDelegate, NPTunnelDelegate, NPTunnelFlowDelegate, NSPServerCommands> {
    NSArray * _appRules;
    NSPConfiguration * _configuration;
    NSArray * _currentAgents;
    BOOL  _currentNetworkHasProxies;
    NSMutableDictionary * _flowCache;
    NSPFlowDivert * _flowDivert;
    NSTimer * _idleTimer;
    BOOL  _initialUpdate;
    BOOL  _isIdle;
    BOOL  _isObserving;
    NWPathEvaluator * _pathEvaluator;
    NWPathEvaluator * _policyEvaluator;
    NSDictionary * _serviceProperties;
    NPTunnelTuscany * _tunnel;
}

@property (readonly) BOOL TFORequirementNotMet;
@property (retain) NSArray *appRules;
@property (retain) NSPConfiguration *configuration;
@property (retain) NSArray *currentAgents;
@property BOOL currentNetworkHasProxies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *flowCache;
@property (retain) NSPFlowDivert *flowDivert;
@property (readonly) unsigned int hash;
@property (retain) NSTimer *idleTimer;
@property BOOL initialUpdate;
@property BOOL isIdle;
@property BOOL isObserving;
@property (readonly) NWPathEvaluator *pathEvaluator;
@property (readonly) NWPathEvaluator *policyEvaluator;
@property (readonly) NSDictionary *serviceProperties;
@property (readonly) Class superclass;
@property (retain) NPTunnelTuscany *tunnel;

+ (id)sharedManager;

- (void).cxx_destruct;
- (BOOL)TFORequirementNotMet;
- (id)appRules;
- (void)clearIdleTimer;
- (void)closeCurrentConnectionWithCompletionHandler:(id /* block */)arg1;
- (id)configuration;
- (void)container:(id)arg1 didFailWithError:(id)arg2;
- (void)container:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(id /* block */)arg2;
- (void)container:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)container:(id)arg1 didStartWithError:(id)arg2;
- (void)copyConnectionInfoForFlow:(unsigned int)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)currentAgents;
- (id)currentAppRule;
- (BOOL)currentNetworkHasProxies;
- (void)fetchConnectionInfoForFlow:(unsigned int)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)flowCache;
- (void)flowDidClose:(id)arg1;
- (id)flowDivert;
- (int)flowGetCurrentMTU;
- (id)flowInstantiateTelemetryFlowWithService:(id)arg1 url:(id)arg2;
- (id)idleTimer;
- (void)idleTimerFired:(id)arg1;
- (id)init;
- (BOOL)initialUpdate;
- (BOOL)initializeTuscanyTunnel;
- (id)instantiateFlowWithAppProxyFlow:(id)arg1;
- (id)instantiateFlowWithInputHandler:(struct nw_protocol { struct nw_protocol_identifier {} *x1; struct nw_protocol_callbacks {} *x2; struct nw_protocol {} *x3; void *x4; unsigned char x5[16]; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (BOOL)isIdle;
- (BOOL)isObserving;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pathEvaluator;
- (id)policyEvaluator;
- (void)resetIdleTimer;
- (void)resetTunnelWithCompletionHandler:(id /* block */)arg1;
- (void)sendKeyBag:(id)arg1 usageData:(id)arg2;
- (id)serviceProperties;
- (void)setAppRules:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCurrentAgents:(id)arg1;
- (void)setCurrentNetworkHasProxies:(BOOL)arg1;
- (void)setFlowCache:(id)arg1;
- (void)setFlowDivert:(id)arg1;
- (void)setIdleTimer:(id)arg1;
- (void)setInitialUpdate:(BOOL)arg1;
- (void)setIsIdle:(BOOL)arg1;
- (void)setIsObserving:(BOOL)arg1;
- (void)setTunnel:(id)arg1;
- (void)setupServiceProperties;
- (BOOL)shouldTunnelFlowWithParameters:(id)arg1;
- (void)start;
- (void)startWithConfiguration:(id)arg1 appRules:(id)arg2;
- (void)stopWithCompletionHandler:(id /* block */)arg1;
- (id)tunnel;
- (id)tunnel:(id)arg1 openConnectionToEndpoint:(id)arg2 enableTFO:(BOOL)arg3 enableNoTFOCookie:(BOOL)arg4 initialData:(id)arg5 enableMultipath:(BOOL)arg6 enableTLS:(BOOL)arg7 TLSParameters:(id)arg8 TLSDelegate:(id)arg9 URL:(id)arg10;
- (id)tunnel:(id)arg1 openSessionToEndpoint:(id)arg2 fromEndpoint:(id)arg3;
- (void)tunnelDidConnect;
- (void)tunnelDidDisconnect;
- (unsigned int)tunnelGetCurrentInterfaceIndex:(id)arg1;
- (int)tunnelGetCurrentMTU:(id)arg1;
- (BOOL)tunnelGetIsNetworkCaptive;
- (BOOL)tunnelGetNetworkHasProxy;

@end
