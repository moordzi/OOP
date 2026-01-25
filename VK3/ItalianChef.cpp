#include "ItalianChef.h"
#include <iostream>
#include <algorithm> // std::min
using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name) {
    cout << "ItalianChef " << chefName << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << chefName << " destruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w) {
    if (password.compare(pw) == 0) {
        cout << "Password ok!" << endl;
        flour = f;
        water = w;
        makePizza();
        return true;
    }
    return false;
}

int ItalianChef::makePizza() {
    int pizzas = min(flour / 5, water / 5);
    cout << "ItalianChef " << chefName
         << " with " << flour
         << " flour and " << water
         << " water can make "
         << pizzas << " pizzas" << endl;
    return pizzas;
}
