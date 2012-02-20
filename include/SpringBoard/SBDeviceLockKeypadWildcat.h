/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDeviceLockKeypad.h"
#import "SpringBoard-Structs.h"

@class UIView;

@interface SBDeviceLockKeypadWildcat : SBDeviceLockKeypad {
	UIView *_glowView;	// 136 = 0x88
}
+ (id)keypadImage;	// 0x93bc9
+ (id)pressedImage;	// 0x93bb9
- (id)initWithFrame:(CGRect)frame;	// 0x93de9
- (void)dealloc;	// 0x93b6d
- (void)setHighlighted:(BOOL)highlighted;	// 0x93c7d
- (float)_yFudge;	// 0x932c1
- (CGRect)_rectForKey:(int)key;	// 0x93bf1
- (BOOL)deleteKeyChar;	// 0x932c5
- (BOOL)cancelKeyChar;	// 0x932dd
@end
