#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
private:
    string password = "pizza";
    int flour;
    int water;

    int makePizza();   // PRIVATE

public:
    ItalianChef(string name);
    ~ItalianChef();

    bool askSecret(string pw, int flour, int water);
};

#endif
