#pragma once

#include "line.h"

class Sqr :public Line {

public:

	Sqr() = default;
	Sqr(int _x1, int _y1, int _x2, int _y3);

	void shift(int x, int y, int z = 0) override;
	void scaleX(int x) override;
	void scaleY(int y) override;
	void scale(int n) override;

private:

	int x3; int y3;
	int x4; int y4;
};