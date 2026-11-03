#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearmodel;
public:
    Car();

    void printdata();

    string getBrand() const;
    void setBrand(const string &newBrand);

    string getModel() const;
    void setModel(const string &newModel);

    int getYearmodel() const;
    void setYearmodel(int newYearmodel);
};

#endif // CAR_H
