/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface bundleIDEntry : NSObject {
    NSMutableArray *_netres;
    long long _seq;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id handler;

}

@property(copy) id handler;
@property(retain) NSMutableArray * netres;
@property long long seq;

- (void).cxx_destruct;
- (id)handler;
- (id)init;
- (id)netres;
- (long long)seq;
- (void)setHandler:(id)arg1;
- (void)setNetres:(id)arg1;
- (void)setSeq:(long long)arg1;

@end
