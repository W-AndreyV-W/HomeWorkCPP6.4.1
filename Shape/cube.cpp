#include "cube.h"


Cube::Cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5) :Shape(_x1, _y1) {

	xi.resize(8);				yi.resize(8);				zi.resize(8);
	xi[0] = _x1;				yi[0] = _y1;				zi[0] = _z1;
	xi[1] = _x2;				yi[1] = _y2;				zi[1] = _z2;
	xi[2] = _x2 + _x4 - _x1;	yi[2] = _y4 + _y2 - _y1;	zi[2] = _z4 + _z2 - _z1;
	xi[3] = _x4;				yi[3] = _y4;				zi[3] = _z4;
	xi[4] = _x5;				yi[4] = _y5;				zi[4] = _z5;
	xi[5] = _x2 + _x5 - _x1;	yi[5] = _y2 + _y5 - _y1;	zi[5] = _z2 + _z5 - _z1;
	xi[6] = xi[2] + _x5 - _x1;	yi[6] = yi[2] + _y5 - _y1;	zi[6] = zi[2] + _z5 - _z1;
	xi[7] = _x4 + _x5 - _x1;	yi[7] = _y4 + _y5 - _y1;	zi[7] = _z4 + _z5 - _z1;
}

void Cube::shift(int x, int y, int z) {

	for (int i = 0; i < 8; i++) {

		xi[i] += x;
		yi[i] += y;
		zi[i] += z;
	}
}

void Cube::scaleX(int x) {

	for (int i = 0; i < 8; i++) {

		xi[i] *= x;
	}
}

void Cube::scaleY(int y) {

	for (int i = 0; i < 8; i++) {

		yi[i] *= y;
	}
}

void Cube::scaleZ(int z) {

	for (int i = 0; i < 8; i++) {

		zi[i] *= z;
	}
}

void Cube::scale(int n) {

	for (int i = 0; i < 8; i++) {

		xi[i] /= n;
		yi[i] /= n;
		zi[i] /= n;
	}
}