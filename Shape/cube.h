#pragma once

#include <vector>

#include "shape.h"

class Cube :public Shape {

public:

	Cube() = default;
	Cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5);

	void shift(int x, int y, int z) override;
	void scaleX(int x) override;
	void scaleY(int y) override;
	virtual void scaleZ(int z);
	void scale(int n) override;

private:

	std::vector<int> xi;
	std::vector<int> yi;
	std::vector<int> zi;
};