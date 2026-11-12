#include "car.h"
Car::Car() {}

Car::Car(string brand, string model, int yearmodel)
{
    this->brand = brand;
    this->model = model;
    this->yearmodel = yearmodel;
}

void Car::printdata()
{
    cout << "Brand :" << brand << endl << "Model :" << model << endl << "Yearmodel :" << yearmodel << endl;
}
