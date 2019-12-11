/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/XXUnknownSuperclass.h>

@class NSDictionary;

@interface MBMessage : XXUnknownSuperclass {
	void *_xpcObject;	// 4 = 0x4
	NSDictionary *_messageInfo;	// 8 = 0x8
	NSDictionary *_replyInfo;	// 12 = 0xc
}
@property(copy, nonatomic) NSDictionary *replyInfo;	// G=0xfd21; S=0xfdf1; @synthesize=_replyInfo
@property(readonly, assign, nonatomic) NSDictionary *messageInfo;	// G=0xfd11; @synthesize=_messageInfo
+ (id)messageWithInfo:(id)info;	// 0xfda9
- (id)_initWithXPCObject:(void *)xpcobject;	// 0xffe5
- (id)initWithMessageInfo:(id)messageInfo;	// 0xfd51
- (void)dealloc;	// 0xff6d
- (void)sendReply;	// 0xfef1
- (void *)_xpcObject;	// 0xfe81
- (id)description;	// 0xfe15
// declared property getter: - (id)messageInfo;	// 0xfd11
// declared property getter: - (id)replyInfo;	// 0xfd21
// declared property setter: - (void)setReplyInfo:(id)info;	// 0xfdf1
@end