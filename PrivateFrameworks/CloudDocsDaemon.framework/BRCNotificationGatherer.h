/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCNotificationPipe;

@interface BRCNotificationGatherer : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _gatherReply;

    BRCNotificationPipe *_pipe;
}

- (void).cxx_destruct;
- (BOOL)continueGatheringWithBatchSize:(int)arg1;
- (void)done;
- (id)initWithNotificationPipe:(id)arg1 reply:(id)arg2;
- (void)invalidate;

@end
