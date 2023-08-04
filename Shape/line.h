#pragma once

#include "shape.h"

class Line :public Shape {

public:

	Line() = default;
	Line(int _x1, int _y1, int _x2);

	void shift(int x, int y, int z = 0) override;
	void scaleX(int x) override;
	void scaleY(int y) override;
	void scale(int n) override;

private:

	int x2 = 0; int y2 = 0;
};