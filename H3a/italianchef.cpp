#include "italianchef.h"


ItalianChef::ItalianChef(string n) : Chef(n)
{
    cout << "ItalianChef " << name << " Konstruktori" << endl;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef " << getName() << " Make Pasta" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << getName() << " Destruktori" << endl;
}

string ItalianChef::getName() const
{
    return name;
}
