#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;


class Car
{
private:
    string brand;
    string model;
    int yearmodel;
public:
    Car();
    Car(string, string, int);
    void printdata();
};

#endif // CAR_H
