#include "line.h"

Line::Line(int _x1, int _y1, int _x2) :Shape(_x1, _y1) {

	x2 = _x2; y2 = _y1;
}

void Line::shift(int x, int y, int z) {

	Shape::shift(x, y);
	x2 += x; y2 += y;
}

void Line::scaleX(int x) {

	Shape::scaleX(x);
	x2 *= x;
}

void Line::scaleY(int y) {

	Shape::scaleY(y);
	y2 *= y;
}

void Line::scale(int n) {

	Shape::scale(n);
	x2 /= n; y2 /= n;
}