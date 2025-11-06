//
// Created by USER on 11/5/2025.
//

#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle() {
    m_area = 3.14;
    m_radius = 1.00;
}
void Circle::calcArea(double radius) {
    m_area = M_PI * radius * radius;

}
Circle::Circle(double radius) {
    m_radius = radius;
    calcArea(m_radius);
}
void Circle::display() {
    std::cout << "The area of a circle with ..." << std::endl;
    std::cout <<"a radius of  "<< m_radius << " inches" <<std::endl;
    std::cout << "has an area of " << m_area << " square inches."<<std::endl;

}