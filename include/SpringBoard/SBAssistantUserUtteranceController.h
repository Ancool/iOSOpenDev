/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AFUIUtteranceViewDelegate.h"
#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class NSString, AFUIUserUtteranceView, SBAssistantUserUtterance;

@interface SBAssistantUserUtteranceController : SBUnknownSuperclass <AFUIUtteranceViewDelegate> {
	SBAssistantUserUtterance *_utterance;	// 12 = 0xc
	NSString *_preCorrectionText;	// 16 = 0x10
	CGSize _currentTextSize;	// 20 = 0x14
	BOOL _textChanged;	// 28 = 0x1c
	BOOL _correctable;	// 29 = 0x1d
	AFUIUserUtteranceView *_view;	// 32 = 0x20
}
@property(assign) BOOL isCorrectable;	// G=0x134075; S=0x134599; converted property
@property(readonly, retain) AFUIUserUtteranceView *view;	// G=0x134611; converted property
+ (id)controllerWithUtterance:(id)utterance isCorrectable:(BOOL)correctable delegate:(id)delegate;	// 0x1340f5
- (id)initWithUtterance:(id)utterance isCorrectable:(BOOL)correctable delegate:(id)delegate;	// 0x134089
- (void)dealloc;	// 0x1347a9
- (void)_updateViewWithCurrentUtterance;	// 0x134691
// converted property getter: - (id)view;	// 0x134611
- (id)text;	// 0x1345e9
- (id)correctionIdentifier;	// 0x1345c9
// converted property getter: - (BOOL)isCorrectable;	// 0x134075
// converted property setter: - (void)setIsCorrectable:(BOOL)correctable;	// 0x134599
- (void)updateWithUtterance:(id)utterance;	// 0x134541
- (void)_checkUpdatedSizingForUtteranceView:(id)utteranceView;	// 0x13447d
- (BOOL)_isServerResponse;	// 0x134085
- (id)description;	// 0x134425
- (BOOL)utteranceViewTextShouldPreventCorrection:(id)utteranceViewText;	// 0x1343f9
- (void)utteranceViewTextWillBeginCorrecting:(id)utteranceViewText;	// 0x1342b5
- (void)utteranceViewTextDidChange:(id)utteranceViewText;	// 0x13428d
- (void)utteranceViewTextDidFinishCorrecting:(id)utteranceViewText;	// 0x13413d
@end
