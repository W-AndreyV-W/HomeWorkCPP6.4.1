#include "sqr.h"

Sqr::Sqr(int _x1, int _y1, int _x2, int _y3) :Line(_x1, _y1, _x2) {

	x3 = _x1; y3 = _y3;
	x4 = _x2; y4 = _y3;
}

void Sqr::shift(int x, int y, int z) {

	Line::shift(x, y);
	x3 += x; y3 += y;
	x4 += x; y4 += y;
}

void Sqr::scaleX(int x) {

	Line::scaleX(x);
	x3 *= x;
	x4 *= x;
}

void Sqr::scaleY(int y) {

	Line::scaleY(y);
	y3 *= y;
	y4 *= y;
}

void Sqr::scale(int n) {

	Line::scale(n);
	x3 /= n; y3 /= n;
	x4 /= n; y4 /= n;
}