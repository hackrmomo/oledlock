/* How to Hook with Logos
Hooks are written with syntax similar to that of an Objective-C @implementation.
You don't need to #include <substrate.h>, it will be done automatically, as will
the generation of a class list and an automatic constructor.

%hook ClassName

// Hooking a class method
+ (id)sharedInstance {
	return %orig;
}

// Hooking an instance method with an argument.
- (void)messageName:(int)argument {
	%log; // Write a message about this call, including its class, name and arguments, to the system log.

	%orig; // Call through to the original function with its original arguments.
	%orig(nil); // Call through to the original function with a custom argument.

	// If you use %orig(), you MUST supply all arguments (except for self and _cmd, the automatically generated ones.)
}

// Hooking an instance method with no arguments.
- (id)noArguments {
	%log;
	id awesome = %orig;
	[awesome doSomethingElse];

	return awesome;
}

// Always make sure you clean up after yourself; Not doing so could have grave consequences!
%end
*/

#import <UIKit/UIKit.h>
#include <SpringBoard/SpringBoard.h>
#import <SpringBoard/SpringBoard.h>
#import <SpringBoard/SBLockScreenViewController.h>



#import <Foundation/Foundation.h>
#import <substrate.h>

UIView *topView = NULL;



%hook SBLockScreenManager

SBLockScreenViewController *sblsvcb = NULL;
- (void)loadViewsIfNeeded{

    %orig; //execute orig
    NSLog(@"OLEDLOCK! View is here"); //NSLog for checking if tweak loaded


    sblsvcb = MSHookIvar<SBLockScreenViewController *>(self, "_lockScreenViewController");
    NSLog(@"OLEDLOCK! %@", sblsvcb);
    //Create the black view and add it
    topView = [[UIView alloc] initWithFrame: CGRectMake(0, 0, [sblsvcb view].frame.size.width, [sblsvcb view].frame.size.height)];
    [topView setBackgroundColor: [UIColor blackColor]];
    [[sblsvcb view] addSubview: topView];
    [[sblsvcb view] bringSubviewToFront: topView];
    topView.layer.zPosition = 100000;
}

%end

%hook SBLockScreenViewControllerBase
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
  [UIView animateWithDuration:0.7 animations:^{
      NSLog(@"OLEDLOCK!  TOUCHIE");
      topView.alpha = 0;
  }];
}
%end

%hook SBBacklightController
- (void)turnOnScreenFullyWithBacklightSource:(long long)arg1{
  %orig;
  topView.alpha = 1;
}
%end

%hook SBLockStateAggregator
unsigned long long lstate = 3; // define dummy var same name and then perform MSHOOKIvar<type>(self, "nameOfVar");
- (void)_updateLockState{//_updateLockState is called multiple times during unlock

  lstate = MSHookIvar<unsigned long long>(self, "_lockState");
  //You get valid lockState
  %orig;
  NSLog(@"OLEDLOCK!  lockState: %llu", lstate);

  if (lstate == 1 || lstate == 0){
    [UIView animateWithDuration:0.7 animations:^{
        topView.alpha = 0;
    }];
  }
}
%end

%hook SBStatusBarManager {
  

}
