#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Audi", "A8", 2022));
    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.emplace_back("Saab", "J2", 1999);

    cout << "Toinen alkio" << endl;
    carList[1].printdata();
    cout << endl;

    cout << "Kaikki autot:" << endl;
    for (size_t i = 0; i < carList.size(); i++)
    {
        carList[i].printdata();
        cout << endl;
    }

    return 0;
}