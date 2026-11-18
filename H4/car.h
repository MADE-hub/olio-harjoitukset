#include "engine.h"
#include "wheel.h"

#include <iostream>

using namespace std;
#ifndef CAR_H
#define CAR_H

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;
public:
    Car();
    Car(string, string);

    void setEngine(){
        objEngine.setHorsepower(150);
        objEngine.setDisplacement(2.0);
    }
    void setWheels(){
        objWheel1.setSize(17);
        objWheel1.setType("Kesarengas");
        objWheel2.setSize(17);
        objWheel2.setType("Kesarengas");
        objWheel3.setSize(17);
        objWheel3.setType("Kesarengas");
        objWheel4.setSize(17);
        objWheel4.setType("Kesarengas");
    }
    string getModel() const;
    void setModel(const string &newModel);

    string getBrand() const;
    void setBrand(const string &newBrand);

    void printDetails();
};

#endif // CAR_H
