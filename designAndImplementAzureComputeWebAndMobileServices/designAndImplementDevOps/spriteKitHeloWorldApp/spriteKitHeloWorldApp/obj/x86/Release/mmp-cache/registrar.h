#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wtypedef-redefinition"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
#include <stdarg.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import <SpriteKit/SpriteKit.h>
#import <CloudKit/CloudKit.h>

@protocol NSMenuValidation;
@class __monomac_internal_ActionDispatcher;
@class __MonoMac_NSActionDispatcher;
@class __MonoMac_NSAsyncActionDispatcher;
@class Foundation_NSUrlSessionHandler_WrappedNSInputStream;
@class __NSGestureRecognizerToken;
@class __NSClickGestureRecognizer;
@class __NSGestureRecognizerParameterlessToken;
@class __NSGestureRecognizerParametrizedToken;
@class __NSMagnificationGestureRecognizer;
@class __NSPanGestureRecognizer;
@class __NSPressGestureRecognizer;
@class __NSRotationGestureRecognizer;
@class __NSObject_Disposer;
@class Foundation_NSUrlSessionHandler_NSUrlSessionHandlerDelegate;
@class AppDelegate;
@class spriteKitHeloWorldApp_GameScene;

@protocol NSMenuValidation
	@required -(BOOL) validateMenuItem:(NSMenuItem *)p0;
@end

@interface __NSGestureRecognizerToken : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface __NSGestureRecognizerParameterlessToken : __NSGestureRecognizerToken {
}
	-(void) target;
@end

@interface __NSGestureRecognizerParametrizedToken : __NSGestureRecognizerToken {
}
	-(void) target:(NSGestureRecognizer *)p0;
@end

@interface AppDelegate : NSObject<NSApplicationDelegate> {
}
	@property (nonatomic, assign) SKView * MyGameView;
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(SKView *) MyGameView;
	-(void) setMyGameView:(SKView *)p0;
	-(void) applicationDidFinishLaunching:(NSNotification *)p0;
	-(BOOL) applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface spriteKitHeloWorldApp_GameScene : SKScene {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) didMoveToView:(SKView *)p0;
	-(void) mouseDown:(NSEvent *)p0;
	-(void) update:(double)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end


