//
// Created by USER on 11/5/2025.
//

#ifndef QUIZ2_MOHAMEDELHAJ565_CYLINDER_H
#define QUIZ2_MOHAMEDELHAJ565_CYLINDER_H
#include "Circle.h"


class Cylinder: public Circle {
private:
    double m_height;
    double m_volume;
    void calcVolume(double r, double h);
public:
    Cylinder(double radius, double height);
    void display();
};


#endif //QUIZ2_MOHAMEDELHAJ565_CYLINDER_H