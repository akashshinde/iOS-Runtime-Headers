/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIView;

@interface FUCrossFadeZoomTransitionAnimator : NSObject <FUViewControllerAnimatedTransitioning> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animationCompletionBlock;

    id _context;
    UIView *_largeView;
    UIView *_smallView;
    BOOL _transitionCompleted;
    BOOL _zoomingUp;
}

@property(retain) id context;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) UIView * largeView;
@property(retain) UIView * smallView;
@property(readonly) Class superclass;
@property BOOL zoomingUp;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)completeTransitionImmediately;
- (id)context;
- (id)largeView;
- (void)setContext:(id)arg1;
- (void)setLargeView:(id)arg1;
- (void)setSmallView:(id)arg1;
- (void)setZoomingUp:(BOOL)arg1;
- (id)smallView;
- (double)transitionDuration:(id)arg1;
- (BOOL)zoomingUp;

@end
