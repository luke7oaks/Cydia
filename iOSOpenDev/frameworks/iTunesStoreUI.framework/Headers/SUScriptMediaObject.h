/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSMutableArray, SUMediaObject;

@interface SUScriptMediaObject : SUScriptObject {
	NSMutableArray *_scriptFunctions;	// 36 = 0x24
	unsigned _thumbnailOffset;	// 40 = 0x28
}
@property(readonly, assign) NSString *mediaType;	// G=0xbfee9; 
@property(readonly, assign) SUMediaObject *nativeMediaObject;	// G=0xbf665; 
+ (void)initialize;	// 0xc0171
+ (id)webScriptNameForSelector:(SEL)selector;	// 0xc00b5
+ (id)webScriptNameForKey:(const char *)key;	// 0xc0011
- (id)scriptAttributeKeys;	// 0xc0111
- (id)attributeKeys;	// 0xc0101
- (void)_removeScriptFunction:(id)function;	// 0xbffa9
- (void)_addScriptFunction:(id)function;	// 0xbff09
// declared property getter: - (id)mediaType;	// 0xbfee9
- (id)_className;	// 0xbfedd
- (id)valueForProperty:(id)property;	// 0xbfe31
- (id)thumbnailWithMaximumSize:(int)maximumSize;	// 0xbfd59
- (void)saveToLibraryWithCompletionHandler:(id)completionHandler;	// 0xbfb4d
- (void)loadLibraryThumbnailWithCompletionHandler:(id)completionHandler;	// 0xbf81d
- (void)generateThumbnailWithMaximumSize:(int)maximumSize completionHandler:(id)handler;	// 0xbf68d
// declared property getter: - (id)nativeMediaObject;	// 0xbf665
- (void)dealloc;	// 0xbf5f5
- (id)initWithNativeMediaObject:(id)nativeMediaObject;	// 0xbf4ed
- (id)init;	// 0xbf4d9
@end