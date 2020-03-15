#include "Rect.h"
#include "GlutApp.h"
#include <cmath>

Rect::Rect(){
	x = 0;
	y = 0;
	w = 0.5;
	h = 0.5;
	r = 1;
	g = 0;
	b = 0;
	theta = 0;
	inc = 2*M_PI/60;
	radius = 0.5;
	cx = 0;
	cy = 0;
	
}

Rect::Rect(float x, float y, float w, float h, float r, float g, float b){
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
	this->r = r;
	this->g = g;
	this->b = b;
	left = false;
}

void Rect::draw() const {
	glColor3f(r, g, b);
	glBegin(GL_POLYGON);

	glVertex2f(x, y);
	glVertex2f(x+w, y);
	glVertex2f(x+w, y-h);
	glVertex2f(x, y-h);

	glEnd();
}


void Rect::setY(float y){
	this-> y = y;
}

void Rect::setX(float x){
	this-> x = x;
}

float Rect::getY() const {
	return y;
}

float Rect::getX() const {
	return x;
}

float Rect::getW() const {
	return w;
}

float Rect::getH()const{
	return h;
}

void Rect::moveLR() {
	    if (getX() >= 1){
            left = false; 
         }
         if (getX() <= -0.8){
            left = true;
         }
         if (left){
            setX(getX() + 0.01);
         }
         else{
            setX(getX() - 0.01);
         }
}

void Rect::moveCircle(){
	setX(radius * cos(theta));
	setY(radius * sin(theta));
	

	theta += inc;
	
///mfoamoeroifwnfwoinwrf
	
}