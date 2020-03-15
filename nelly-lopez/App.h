#ifndef APP_H
#define APP_H
#include <vector>

#include "GlutApp.h"
#include "Rect.h"
#include "TexRect.h"
#include "TextBox.h"
#include "Button.h"
//nfkjenfourw



class App: public GlutApp {
    
    bool fullscreen;
    //float ycoord;
    Rect* button1;     //pointer to initialize as new Rect()
    Rect* button2;
    Rect* rect2;

    Button* btn;

    // TexRect* pic;
    // TexRect* bg;
    
    // TextBox* text;
    

    bool up;

public:
    bool animating;
    bool animating2;
    App(int argc, char** argv, int width, int height, const char* title);
    
    void draw() const;
    
    void keyDown(unsigned char key, float x, float y);

    void idle();

    void leftMouseDown(float x, float y);
    
    ~App();
};

#endif
