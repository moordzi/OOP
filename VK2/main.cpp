#include <iostream>
#include "Game.h"

using namespace std;

int main() {
    int maxValue;
    cout << "Enter the maximum number for the game: ";
    cin >> maxValue;

    Game myGame(maxValue);
    myGame.play();

    return 0;
}
