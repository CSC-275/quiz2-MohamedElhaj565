#include <cmath>
#include "Cylinder.h"
#include <iostream>
void Cylinder::calcVolume(double r, double h) {
    m_volume = M_PI * r * r * h;
}
Cylinder::Cylinder(double radius, double height)
    : Circle(radius)
{
    m_height = height;
    calcVolume(radius, height);
}
void Cylinder::display() {
    Circle::display();
    std::cout << "And the volume of a Cylinder with..." << std::endl;
    std::cout << "a circular end area of " << m_area << " square inches" << std::endl;
    std::cout << "and a height of " << m_height << " inches" << std::endl;
    std::cout << "has a volume of " << m_volume << " cubic inches." << std::endl;
}