#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
private:
    double Width;
    double Higth;
public:
    Rectangle();

    double getWidth() const;
    void setWidth(double newWidth);

    double getHigth() const;
    void setHigth(double newHigth);

    double getArea();
    double getCircum();
    ~Rectangle();
};

#endif // RECTANGLE_H
