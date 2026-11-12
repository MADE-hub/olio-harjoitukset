#include "chef.h"
Chef::~Chef()
{
    cout << name << " Destruktori" << endl;
}

Chef::Chef() {}

Chef::Chef(string n)
{
    name = n;
    cout << name << " Konstruktori" << endl;
}

void Chef::makeSalad()
{
    cout << name << " Make Salad" << endl;
}

void Chef::makeSoup()
{
    cout << name << " Make Soup" << endl;
}
