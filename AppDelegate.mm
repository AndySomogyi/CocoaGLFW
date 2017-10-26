#import "AppDelegate.h"
#include <iostream>
#include "GLFWTest.h"

@implementation AppDelegate

@synthesize window = _windows;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
  // Insert code here to initialize your application
}

-(IBAction)testButtonClicked:(id)sender {
    
    std::cout << "I was clicked" << std::endl;
    
    createGlWindow(700, 400, 0, 0);
    
    
}

-(IBAction)stepMsg:(id)sender {
    step();
}

-(IBAction)closeGlWindow:(id)sender {
    closeGlWindow();
}

@end
