/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class <MLMediaLibraryServiceProtocol>, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol> {
    NSMutableDictionary *_progressBlocksByUUID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSXPCConnection *_serviceConnection;
    <MLMediaLibraryServiceProtocol> *_serviceProxy;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (void)_setDaemonProcessInfo:(id)arg1;
+ (id)sharedMediaLibraryService;

- (void).cxx_destruct;
- (id)_serviceConnection;
- (oneway void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned int)arg2 options:(unsigned int)arg3 completionHandler:(id)arg4;
- (oneway void)cancelImportOperation:(unsigned int)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (oneway void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (oneway void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(id)arg5;
- (oneway void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(id)arg4;
- (oneway void)getDeviceSharedLibraryPath:(id)arg1;
- (oneway void)getLanguageResourcesWithCompletion:(id)arg1;
- (oneway void)importOperationWithIdentifier:(id)arg1 didUpdateWithProgress:(float)arg2;
- (id)init;
- (oneway void)lockDatabaseForReason:(id)arg1 withCompletion:(id)arg2;
- (oneway void)performDatabaseOperation:(unsigned int)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(id)arg4;
- (void)performImportFromSource:(unsigned int)arg1 intoDatabaseAtPath:(id)arg2 withTrackData:(id)arg3 withPlaylistData:(id)arg4 options:(id)arg5 completionHandler:(id)arg6;
- (oneway void)performImportFromSource:(unsigned int)arg1 intoDatabaseAtPath:(id)arg2 withTrackData:(id)arg3 withPlaylistData:(id)arg4 withFileHandle:(id)arg5 options:(id)arg6 progressBlock:(id)arg7 completionHandler:(id)arg8;
- (oneway void)pollCurrentImportStatus:(id)arg1;
- (oneway void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(id)arg2;
- (oneway void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2;
- (oneway void)setDeviceSharedLibraryPath:(id)arg1 withCompletion:(id)arg2;
- (oneway void)setOptions:(id)arg1 withCompletionHandler:(id)arg2;
- (oneway void)unlockDatabaseWithCompletion:(id)arg1;
- (oneway void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(id)arg2;

@end
