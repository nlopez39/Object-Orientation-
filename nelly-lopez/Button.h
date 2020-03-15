#ifndef BUTTON_H
#define BUTTON_H

#include "Rect.h"

class Button : public Rect{
public:

	void (*func)();

	bool clicked;
	Button();
	Button(float x, float y, float w, float h);

	void draw() const;

	void handle(float x, float y);

};

#endif
