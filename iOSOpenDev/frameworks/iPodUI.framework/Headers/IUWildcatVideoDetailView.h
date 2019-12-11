/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/XXUnknownSuperclass.h>

@class UIView, IULiveReflectionView, IUVideoTitleView, UINavigationBar, IUPosterImageView, UIColor;
@protocol IUWildcatVideoDetailViewDelegate;

@interface IUWildcatVideoDetailView : XXUnknownSuperclass {
	id<IUWildcatVideoDetailViewDelegate> _delegate;	// 48 = 0x30
	IULiveReflectionView *_posterReflectionView;	// 52 = 0x34
	IUPosterImageView *_posterImageView;	// 56 = 0x38
	IUVideoTitleView *_videoTitleView;	// 60 = 0x3c
	UINavigationBar *_navBar;	// 64 = 0x40
	UIView *_segmentedView;	// 68 = 0x44
	UIView *_dividingLine;	// 72 = 0x48
	UIColor *_blackColor;	// 76 = 0x4c
	UIColor *_reflectionStartColor;	// 80 = 0x50
	UIColor *_reflectionEndColor;	// 84 = 0x54
	float _desiredPosterHeightFactor;	// 88 = 0x58
}
@property(assign, nonatomic) float desiredPosterHeightFactor;	// G=0xbda05; S=0xbda15; @synthesize=_desiredPosterHeightFactor
@property(retain, nonatomic) UIView *dividingLine;	// G=0xbd9d1; S=0xbd9e1; @synthesize=_dividingLine
@property(retain, nonatomic) UIView *segmentedView;	// G=0xbd99d; S=0xbd9ad; @synthesize=_segmentedView
@property(retain, nonatomic) UINavigationBar *navBar;	// G=0xbd969; S=0xbd979; @synthesize=_navBar
@property(retain, nonatomic) IUVideoTitleView *videoTitleView;	// G=0xbd935; S=0xbd945; @synthesize=_videoTitleView
@property(retain, nonatomic) IUPosterImageView *posterImageView;	// G=0xbd901; S=0xbd911; @synthesize=_posterImageView
@property(retain, nonatomic) IULiveReflectionView *posterReflectionView;	// G=0xbd8cd; S=0xbd8dd; @synthesize=_posterReflectionView
@property(assign, nonatomic) id<IUWildcatVideoDetailViewDelegate> delegate;	// G=0xbd8ad; S=0xbd8bd; @synthesize=_delegate
// declared property setter: - (void)setDesiredPosterHeightFactor:(float)factor;	// 0xbda15
// declared property getter: - (float)desiredPosterHeightFactor;	// 0xbda05
// declared property setter: - (void)setDividingLine:(id)line;	// 0xbd9e1
// declared property getter: - (id)dividingLine;	// 0xbd9d1
// declared property setter: - (void)setSegmentedView:(id)view;	// 0xbd9ad
// declared property getter: - (id)segmentedView;	// 0xbd99d
// declared property setter: - (void)setNavBar:(id)bar;	// 0xbd979
// declared property getter: - (id)navBar;	// 0xbd969
// declared property setter: - (void)setVideoTitleView:(id)view;	// 0xbd945
// declared property getter: - (id)videoTitleView;	// 0xbd935
// declared property setter: - (void)setPosterImageView:(id)view;	// 0xbd911
// declared property getter: - (id)posterImageView;	// 0xbd901
// declared property setter: - (void)setPosterReflectionView:(id)view;	// 0xbd8dd
// declared property getter: - (id)posterReflectionView;	// 0xbd8cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xbd8bd
// declared property getter: - (id)delegate;	// 0xbd8ad
- (void)layoutSubviews;	// 0xbd379
- (void)dealloc;	// 0xbd26d
- (id)initWithFrame:(CGRect)frame;	// 0xbcf25
@end