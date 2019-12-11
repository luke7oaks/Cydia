/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/NSCopying.h>
#import <iLifeSlideshow/XXUnknownSuperclass.h>

@class NSMutableDictionary, NSMutableArray, NSString, NSDate;

@interface MPClusterSlide : XXUnknownSuperclass <NSCopying> {
	NSDate *mCaptureDate;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
	NSString *mAbsolutePath;	// 12 = 0xc
	int mReferenceCounter;	// 16 = 0x10
	NSMutableDictionary *mUsageCounterPerLayer;	// 20 = 0x14
	NSMutableArray *mUsableSlideClusters;	// 24 = 0x18
	int mIndex;	// 28 = 0x1c
}
@property(copy) NSString *path;	// G=0x38779; S=0x38751; @synthesize=mPath
@property(copy) NSString *absolutePath;	// G=0x387b9; S=0x38791; @synthesize=mAbsolutePath
@property(copy) NSDate *captureDate;	// G=0x387f9; S=0x387d1; @synthesize=mCaptureDate
@property(assign) int referenceCounter;	// G=0x38679; S=0x38689; @synthesize=mReferenceCounter
@property(assign) int index;	// G=0x38659; S=0x38669; @synthesize=mIndex
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x38835; S=0x38811; @synthesize=mUsageCounterPerLayer
@property(retain) NSMutableArray *usableSlideClusters;	// G=0x38871; S=0x3884d; @synthesize=mUsableSlideClusters
- (id)init;	// 0x38699
- (void)dealloc;	// 0x38e9d
- (id)copyWithZone:(NSZone *)zone;	// 0x38dc9
- (void)increaseUsageCounterForLayer:(id)layer;	// 0x38d11
- (int)usageCounterForLayer:(id)layer;	// 0x38cd5
- (void)setUsageCounterForLayer:(id)layer to:(int)to;	// 0x38bc9
- (int)overallUsageCounter;	// 0x38afd
- (void)resetAllUsageCounters;	// 0x38a51
- (id)usageCountDescription;	// 0x388f5
- (id)description;	// 0x38889
// declared property getter: - (id)usableSlideClusters;	// 0x38871
// declared property setter: - (void)setUsableSlideClusters:(id)clusters;	// 0x3884d
// declared property getter: - (id)usageCounterPerLayer;	// 0x38835
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x38811
// declared property getter: - (int)index;	// 0x38659
// declared property setter: - (void)setIndex:(int)index;	// 0x38669
// declared property getter: - (int)referenceCounter;	// 0x38679
// declared property setter: - (void)setReferenceCounter:(int)counter;	// 0x38689
// declared property getter: - (id)captureDate;	// 0x387f9
// declared property setter: - (void)setCaptureDate:(id)date;	// 0x387d1
// declared property getter: - (id)absolutePath;	// 0x387b9
// declared property setter: - (void)setAbsolutePath:(id)path;	// 0x38791
// declared property getter: - (id)path;	// 0x38779
// declared property setter: - (void)setPath:(id)path;	// 0x38751
@end