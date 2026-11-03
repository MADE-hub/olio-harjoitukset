#include "car.h"

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearmodel() const
{
    return yearmodel;
}

void Car::setYearmodel(int newYearmodel)
{
    yearmodel = newYearmodel;
}

Car::Car() {

}

void Car::printdata()
{
    cout << "Brand " << brand << endl << "model " << model <<endl << "Yearmodel " << yearmodel << endl;
}
