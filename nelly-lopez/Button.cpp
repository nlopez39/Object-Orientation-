#include "Button.h"
#include "GlutApp.h"
#include <iostream>

Button::Button(){
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.1;
}

Button::Button(float x, float y, float w, float h){
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
}

void Button::handle(float x, float y){
	if (x >= this->x && x <= this->x + w && y <= this->y && y >= this->y -h){
		std::cout <<"Button was clicked" << std::endl;
	}
}

void Button::draw() const {
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	glVertex2f(x, y);
	glVertex2f(x+w, y);
	glVertex2f(x+w, y-h);
	glVertex2f(x, y-h);

	glEnd();
}
