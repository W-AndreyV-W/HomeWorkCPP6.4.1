#include"shape.h"

Shape::Shape(int _x1, int _y1) {

	x1 = _x1;	y1 = _y1;
}

 void Shape::shift(int x, int y, int z) {

	x1 += x;	y1 += y;
}

void Shape::scaleX(int x) {
	
	x1 *= x;
}

void Shape::scaleY(int y) {

	y1 *= y;
}

void Shape::scale(int n) {

	x1 /= n; y1 /= n;
}