#include "animal.h"
#include "dog.h"
#include <memory>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    /*Animal objA;
    Dog objD;
    objA.callOut();
    objD.callOut();*/

    vector<unique_ptr<Animal>> animals;

    animals.push_back(make_unique<Animal>());
    animals.push_back(make_unique<Dog>());

    for (const auto& animal : animals) {
        animal->callOut();
    }
    return 0;
}
