#pragma once

#include<iostream>

class Shape {

public:

	Shape() = default;
	Shape(int _x1, int _y1);

	virtual void shift(int x, int y, int z = 0);
	virtual void scaleX(int x);
	virtual void scaleY(int y);
	virtual void scale(int n);

private:

	int x1 = 0;	int y1 = 0;
};