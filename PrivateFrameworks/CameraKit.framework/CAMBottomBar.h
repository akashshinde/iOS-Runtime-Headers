/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <CAMBottomBarDelegate>, CAMElapsedTimeView, CAMExpandableMenuButton, CAMFilterButton, CAMFlipButton, CAMHDRButton, CAMImageWell, CAMModeDial, CAMShutterButton, CAMSlalomIndicatorView, CAMTimerButton, UIButton, UIView;

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate> {
    CAMHDRButton *_HDRButton;
    BOOL __HDRButtonExpanded;
    UIView *__elapsedTimeViewCenteringLayoutSpacer;
    CAMExpandableMenuButton *__expandedMenuButton;
    UIView *__filterButtonBottomLayoutSpacer;
    UIView *__hdrButtonCenteringLayoutSpacer;
    UIView *__imageWellBottomLayoutSpacer;
    UIView *__shutterButtomBottomLayoutSpacer;
    UIView *__slalomIndicatorBottomLayoutSpacer;
    UIView *__stillDuringVideoButtonBottomLayoutSpacer;
    BOOL __timerButtonExpanded;
    int _backgroundStyle;
    UIView *_backgroundView;
    UIButton *_cancelButton;
    <CAMBottomBarDelegate> *_delegate;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMFilterButton *_filterButton;
    CAMFlipButton *_flipButton;
    CAMImageWell *_imageWell;
    CAMModeDial *_modeDial;
    int _orientation;
    CAMShutterButton *_shutterButton;
    CAMSlalomIndicatorView *_slalomIndicatorView;
    CAMShutterButton *_stillDuringVideoButton;
    CAMTimerButton *_timerButton;
}

@property(retain) CAMHDRButton * HDRButton;
@property(getter=_isHDRButtonExpanded,setter=_setHDRButtonExpanded:) BOOL _HDRButtonExpanded;
@property(readonly) UIView * _elapsedTimeViewCenteringLayoutSpacer;
@property(setter=_setExpandedMenuButton:,retain) CAMExpandableMenuButton * _expandedMenuButton;
@property(readonly) UIView * _filterButtonBottomLayoutSpacer;
@property(readonly) UIView * _hdrButtonCenteringLayoutSpacer;
@property(readonly) UIView * _imageWellBottomLayoutSpacer;
@property(readonly) UIView * _shutterButtomBottomLayoutSpacer;
@property(readonly) UIView * _slalomIndicatorBottomLayoutSpacer;
@property(readonly) UIView * _stillDuringVideoButtonBottomLayoutSpacer;
@property(getter=_isTimerButtonExpanded,setter=_setTimerButtonExpanded:) BOOL _timerButtonExpanded;
@property int backgroundStyle;
@property(readonly) UIView * backgroundView;
@property(retain) UIButton * cancelButton;
@property <CAMBottomBarDelegate> * delegate;
@property(retain) CAMElapsedTimeView * elapsedTimeView;
@property(retain) CAMFilterButton * filterButton;
@property(retain) CAMFlipButton * flipButton;
@property(retain) CAMImageWell * imageWell;
@property(retain) CAMModeDial * modeDial;
@property int orientation;
@property(retain) CAMShutterButton * shutterButton;
@property(retain) CAMSlalomIndicatorView * slalomIndicatorView;
@property(retain) CAMShutterButton * stillDuringVideoButton;
@property(retain) CAMTimerButton * timerButton;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)HDRButton;
- (void)_commonCAMBottomBarInitialization;
- (id)_currentMenuButtons;
- (id)_elapsedTimeViewCenteringLayoutSpacer;
- (id)_expandedMenuButton;
- (id)_filterButtonBottomLayoutSpacer;
- (id)_hdrButtonCenteringLayoutSpacer;
- (id)_imageWellBottomLayoutSpacer;
- (BOOL)_isHDRButtonExpanded;
- (BOOL)_isTimerButtonExpanded;
- (void)_layoutForHorizontalOrientation;
- (void)_layoutForVerticalOrientation;
- (void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (void)_removeAllConstraints;
- (void)_setExpandedMenuButton:(id)arg1;
- (void)_setHDRButtonExpanded:(BOOL)arg1;
- (void)_setTimerButtonExpanded:(BOOL)arg1;
- (void)_setupHorizontalBackgroundViewConstraints;
- (void)_setupHorizontalCancelButtonConstraints;
- (void)_setupHorizontalConstraints;
- (void)_setupHorizontalFilterButtonConstraints;
- (void)_setupHorizontalImageWellConstraints;
- (void)_setupHorizontalModeDialConstraints;
- (void)_setupHorizontalShutterButtonConstraints;
- (void)_setupHorizontalSlalomIndicatorConstraints;
- (void)_setupHorizontalStillDuringVideoButtonConstraints;
- (void)_setupVerticalBackgroundViewConstraints;
- (void)_setupVerticalCancelButtonConstraints;
- (void)_setupVerticalConstraints;
- (void)_setupVerticalElapsedTimeViewConstraints;
- (void)_setupVerticalFlipButtonConstraints;
- (void)_setupVerticalImageWellConstraints;
- (void)_setupVerticalModeDialConstraints;
- (void)_setupVerticalShutterButtonConstraints;
- (void)_setupVerticalSlalomIndicatorConstraints;
- (BOOL)_shouldHideElapsedTimeView;
- (BOOL)_shouldHideFlipButton;
- (BOOL)_shouldHideHDRButton;
- (BOOL)_shouldHideTimerButton;
- (id)_shutterButtomBottomLayoutSpacer;
- (id)_slalomIndicatorBottomLayoutSpacer;
- (id)_stillDuringVideoButtonBottomLayoutSpacer;
- (void)_updateBackgroundStyleAnimated:(BOOL)arg1;
- (void)_updateHiddenViewsForButtonExpansionAnimated:(BOOL)arg1;
- (void)_updateImageWellInsetsForOrientation;
- (int)backgroundStyle;
- (id)backgroundView;
- (id)cancelButton;
- (void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (id)delegate;
- (id)elapsedTimeView;
- (void)expandMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)filterButton;
- (id)flipButton;
- (id)imageWell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithOrientation:(int)arg1;
- (void)layoutSubviews;
- (id)modeDial;
- (int)orientation;
- (void)setBackgroundStyle:(int)arg1;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setCancelButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFilterButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setImageWell:(id)arg1;
- (void)setModeDial:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setSlalomIndicatorView:(id)arg1;
- (void)setStillDuringVideoButton:(id)arg1;
- (void)setTimerButton:(id)arg1;
- (id)shutterButton;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)slalomIndicatorView;
- (id)stillDuringVideoButton;
- (id)timerButton;
- (void)updateConstraints;

@end
