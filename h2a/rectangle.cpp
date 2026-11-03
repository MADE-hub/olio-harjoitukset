#include "rectangle.h"


double Rectangle::getWidth() const
{
    return Width;
}

void Rectangle::setWidth(double newWidth)
{
    Width = newWidth;
}

double Rectangle::getHigth() const
{
    return Higth;
}

void Rectangle::setHigth(double newHigth)
{
    Higth = newHigth;
}

double Rectangle::getArea()
{
    double area;
    area = Width * Higth;
    cout << "Alue " <<area << endl;
    return area;
}

double Rectangle::getCircum()
{
    double Circum;
    Circum = 2*(Width*Higth);
    cout << "ymparysmitta " << Circum << endl;
    return Circum;
}

Rectangle::~Rectangle()
{
    cout << "Olio tuhottiin" << endl;
}



Rectangle::Rectangle() {}
