#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Audi");
    objCar.setModel("A10");
    objCar.setYearmodel(2020);
    objCar.printdata();

    Rectangle objRectangle;
    objRectangle.setHigth(532);
    objRectangle.setWidth(300);
    objRectangle.getArea();
    objRectangle.getCircum();


    unique_ptr<student> opiskelija = make_unique<student>();

    opiskelija->setName("Matti");
    opiskelija->setStudentNumber(12345);
    opiskelija->setAverage(4.2);

    cout << "Nimi: " << opiskelija->getName() << endl;
    cout << "Opiskelijanumero: " << opiskelija->getStudentNumber() << endl;
    cout << "Keskiarvo: " << opiskelija->getAverage() << endl;

    return 0;
}
