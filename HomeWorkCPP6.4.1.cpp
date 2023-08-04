#include <iostream>

#include "shape.h"
#include "line.h"
#include "sqr.h"
#include "cube.h"

int main()
{

    Sqr sqr(2, 3, 9, 8);
    sqr.shift(5, 3);
    sqr.scaleX(2);

    Cube cube(2, 3, 3, 3, 3, 7, 9, 3, 4, 4, 9, 4);
    cube.shift(3, 5, 4);
    cube.scaleX(3);
    cube.scaleY(1);
    cube.scaleZ(2);
    cube.scale(2);
}