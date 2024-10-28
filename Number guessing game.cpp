#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    vector<int> guesses; // Store previous guesses
    bool guessedCorrectly = false;

    cout << "Guess the number (1 to 100): ";

    while (!guessedCorrectly) {
        cin >> guess;
        guesses.push_back(guess); // Store the guess

        if (guess > number) {
            cout << "Too high! Previous guesses: ";
        } else if (guess < number) {
            cout << "Too low! Previous guesses: ";
        } else {
            cout << "Congratulations! You guessed the number!" << endl;
            guessedCorrectly = true;
        }

        // Display previous guesses
        for (int g : guesses) {
            cout << g << " ";
        }
        cout << endl;
    }

    return 0;
}

