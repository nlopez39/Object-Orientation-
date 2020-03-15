#ifndef RECT_H
#define RECT_H

class Rect{

protected:
	float x;
	float y;
	float w;
	float h;
	float r;
	float g;
	float b;
	bool left;
	float inc;
	float theta;
	float radius;
	float cx;
	float cy;

public:
	Rect();
	Rect(float, float, float, float, float r=1, float g=0, float b=0);

	void draw() const;

	void setY(float y);
	void setX(float x);
	float getY() const;
	float getX() const;
	float getW() const;
	float getH() const;
	void moveLR();
	void moveCircle();
};

#endif
//jsut totootndkjvnnvoidjvoenfodjvofnoienv