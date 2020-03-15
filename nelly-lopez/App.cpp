#include <iostream>
#include "App.h"
#include <cmath>

//  static App* singleton;

//  void doSomething(){
//     singleton->animating2 = !singleton->animating2;

App::App(int argc, char** argv, int width, int height, const char* title): GlutApp(argc, argv, width, height, title){
  
    fullscreen = false;
   // ycoord = -0.5;

    button1 = new Rect(0.1, -0.8 , 0.3, 0.1 , 1, 1, 1);
    button2 = new Rect(0.5, -0.8, 0.3, 0.1, 1, 1,1);//color at the end...three 0's is black, white is 1's
    rect2 = new Rect(-0.8,0.8,0.4,0.1,0,0,1);

    // pic = new TexRect("textures/BB8.png",0,0,0.5,0.5);
    // bg = new TexRect("textures/space.jpg", -1,1,2,2);
    // text = new TextBox("SCORE", -0.9,0.9, GLUT_BITMAP_HELVETICA_18, 1, 1 ,1, 800);
    //btn = new Button(-0.25,-0.7,0.5,0.2);
    //btn->func = doSomething;
    animating = false;
    animating2 = false;
    up = true;

    //singleton = this;
}

void App::draw() const {
    button1->draw();
    button2->draw();
    rect2->draw();
    // text->draw();
    //btn->draw();
    // bg->draw(0);
    // pic->draw(0.1);
    

    // float theta = 0; //to make circle 
    // float inc = 2*M_PI/60;//inc will change the shape entirely 
    
    // float r = 0.5;
    // float center = 0;
    // float yCenter = 0;

    // glColor3f(0,1,0);
   

    // glBegin(GL_POLYGON);

    // for(theta; theta <= 2*M_PI; theta +=inc){
    //     glVertex2f(r*cos(theta) + center, r*sin(theta) +yCenter);
    //     glVertex2f(r*cos(theta+inc) + center, r*sin(theta+inc) +yCenter);//will draw lines long enough to cover the whole circle 
    // }
    // glEnd();
}

void App::leftMouseDown(float x, float y){
    //std::cout <<"Mouse down at" <<x<<","<<y<<std::endl;
   if(x >= button1->getX() && x <= (button1->getX() + button1->getW()) && y <= button1->getY() && y >= (button1->getY() - button1->getH())){
          std::cout <<"CLicked button1"<< std::endl;  
         animating = !animating; 
   }

     if(x >= button2->getX() && x <= (button2->getX() + button2->getW()) && y <= button2->getY() && y >= (button2->getY() - button2->getH())){
          std::cout <<"CLicked button2"<< std::endl;  
         animating2 = !animating2; 
   }

        //btn->handle(x,y);
}                                              //means we are in the 4th quad of a graph 
//}

void App::idle(){//makes it animated, code exectued as many times as possible for a statement 
     if(animating){

         rect2->moveLR();


         redraw();
    }//wknfkjwnk
    if(animating2){

         rect2->moveCircle();   
         

       redraw();
        
    }
} 

// void App::leftMouseDown(float x, float y){
//     //std::cout <<"Mouse down at" <<x<<","<<y<<std::endl;
//     if(x >= 0.1 && x <= 0.4 && y >= -0.9 && y<=-0.8 ){
//            std::cout <<"CLicked button1"<< std::endl;   
//            }                                              //means we are in the 4th quad of a graph 
// }

void App::keyDown(unsigned char key, float x, float y){
    if (key == 27){
        exit(0);
    }
    if(key == ' '){
        animating = !animating; //helps the circle part 
    }
    else if (key == 'f'){
        toggleFullScreen();
    }
    redraw();
}

App::~App(){    
    delete button1;
    delete button2;
    delete rect2;
    // delete pic;
    // delete bg;
    // delete text;
    //delete btn;
    std::cout << "Exiting..." << std::endl;
}
