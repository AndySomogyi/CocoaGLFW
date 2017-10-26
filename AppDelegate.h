#import <AppKit/NSApplication.h> // NSApplicationDelegate

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign, nonatomic) IBOutlet NSWindow *window;

-(IBAction)testButtonClicked:(id)sender;

-(IBAction)stepMsg:(id)sender;

-(IBAction)closeGlWindow:(id)sender;

@end
