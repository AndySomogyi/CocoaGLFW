
int test();

#if defined(__OBJC__)
#import <Cocoa/Cocoa.h>
#else
typedef void* id;
#endif


extern "C" {
    
id getNativeWindow();

void step();

void createGlWindow(int width, int height, int xpos, int ypos);

void closeGlWindow();
    
}
