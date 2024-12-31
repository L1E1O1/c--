#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits> // FÃ¶r INT_MAX

using namespace std;

// Higher or Lower game

int main()
{
    srand((unsigned int)time(NULL));
    bool playAgain = true;
    int highscore = INT_MAX; // Start with the maximum possible value

    while (playAgain)
    {
        int theNumber = (rand() % 100) + 1; // Random number between 1 and 100
        int guess = 0;
        int attempts = 0;
        int maxAttempts = 10;
        bool gameOver = false;

        cout << "Welcome to the Higher or Lower Game!" << endl;
        cout << "I'm thinking of a number between 1 and 100." << endl;
        cout << "You have " << maxAttempts << " attempts." << endl;

        while (!gameOver)
        {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess == theNumber)
            {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;

                if (attempts < highscore)
                {
                    highscore = attempts;
                    cout << "New highscore: " << highscore << " attempts!" << endl;
                }
                else
                {
                    cout << "Your current highscore is: " << highscore << " attempts." << endl;
                }

                gameOver = true;
            }
            else if (attempts == maxAttempts)
            {
                cout << "You ran out of attempts. The number was " << theNumber << "." << endl;
                gameOver = true;
            }
            else if (guess > theNumber)
            {
                cout << "Too high. Try again." << endl;
            }
            else if (guess < theNumber)
            {
                cout << "Too low. Try again." << endl;
            }
        }

        char choice;
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            playAgain = false;
            cout << "Thanks for playing! Your best score was: " << highscore << " attempts." << endl;
        }
        else
        {
            cout << "Starting a new game!" << endl;
        }
    }

    return 0;
}