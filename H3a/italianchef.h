#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
using namespace std;
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string n);

    void makePasta();
    string getName() const;
    ~ItalianChef();



};

#endif // ITALIANCHEF_H
