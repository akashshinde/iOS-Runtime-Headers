/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVAccountInfoProvider>, NSArray;

@interface CoreDAVRequestLogger : NSObject {
    NSArray *_headerSortDescriptors;
    <CoreDAVAccountInfoProvider> *_provider;
    int _snippetsLogged;
}

@property(retain) NSArray * headerSortDescriptors;

- (id)_inflateRequestBody:(id)arg1;
- (void)dealloc;
- (void)finishCoreDAVResponse;
- (id)headerSortDescriptors;
- (id)initWithProvider:(id)arg1;
- (void)logCoreDAVRequest:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(int)arg2 withTaskIdentifier:(id)arg3;
- (void)logCoreDAVResponseSnippet:(id)arg1;
- (void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 isBody:(BOOL)arg3;
- (void)setHeaderSortDescriptors:(id)arg1;

@end
