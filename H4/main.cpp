#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car objcar;
    objcar.setModel("Corolla ");
    objcar.setBrand("Toyota");
    objcar.setEngine();
    objcar.setWheels();
    objcar.printDetails();
    return 0;
}
