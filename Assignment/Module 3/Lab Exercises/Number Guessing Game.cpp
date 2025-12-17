#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int secretNumber, guess;

    srand(time(0));                 // Seed for random number
    secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Guess a number between 1 and 100" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }
    }

    return 0;
}
