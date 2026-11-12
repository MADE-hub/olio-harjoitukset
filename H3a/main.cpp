#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"
using namespace std;

int main()
{
    // Osa 1: Chef
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    // Osa 2: ItalianChef
    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    cout << "name of the Italian Chef is " << italianChef.getName() << endl;

    return 0;
}