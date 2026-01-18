#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"

using namespace std;

// Constructor
Game::Game(int max) {
    maxNumber = max;
    numOfGuesses = 0;

    srand(static_cast<unsigned int>(time(0)));
    randomNumber = (rand() % maxNumber) + 1; // Random number between 1 and maxNumber

    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}

// Destructor
Game::~Game() {
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

// Member function to play the game
void Game::play() {
    bool correct = false;

    while (!correct) {
        cout << "Give your guess between 1-" << maxNumber << ": ";
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess == randomNumber) {
            cout << "Your guess is right = " << playerGuess << endl;
            correct = true;
        } else if (playerGuess < randomNumber) {
            cout << "Your guess is too small" << endl;
        } else {
            cout << "Your guess is too big" << endl;
        }
    }

    printGameResult();
}

// Member function to print the result
void Game::printGameResult() {
    cout << "You guessed the right answer = " << randomNumber
         << " with " << numOfGuesses << " guesses" << endl;
}
