#include <iostream>
#include <cmath>
#include "Circle.h"
#include "Cylinder.h"

int main() {
    Circle c1, c2(5.25);
    c1.display();
    c2.display();
    Circle *cl1 = new Cylinder(3.5, 8.65);
    cl1->display();
    return 0;
}
