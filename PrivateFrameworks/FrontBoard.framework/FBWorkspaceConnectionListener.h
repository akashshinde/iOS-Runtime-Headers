/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBWorkspaceConnectionListener : NSObject <BSXPCConnectionListenerHandler> {
    NSObject<OS_dispatch_queue> *_connectionDispatcherQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void)dealloc;
- (void)handleIncomingConnection:(id)arg1 forService:(id)arg2;
- (id)init;

@end
