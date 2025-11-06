//
// Created by USER on 11/5/2025.
//

#ifndef QUIZ2_MOHAMEDELHAJ565_CIRCLE_H
#define QUIZ2_MOHAMEDELHAJ565_CIRCLE_H


class Circle {
private:
    double m_radius;
protected:
    double m_area;
    void calcArea(double radius);
public:
    Circle();
    Circle(double radius);
    virtual void display();
};


#endif //QUIZ2_MOHAMEDELHAJ565_CIRCLE_H