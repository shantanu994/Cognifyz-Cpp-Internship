#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int secretNumber, userGuess, attempts = 0;
    char playAgain;
    
    srand(time(0));
    
    cout << " Number Guessing Game ";
    
    do {
        secretNumber = rand() % 100 + 1;
        attempts = 0;
        
        cout << "\nI'm thinking of a number between 1 and 100...";
        cout << "Can you guess it?";
        
        do {
            cout << "\nEnter your guess: ";
            cin >> userGuess;
            attempts++;
            
            if(userGuess < 1 || userGuess > 100) {
                cout << "Please enter a number between 1 and 100!";
                continue;
            }
            
            if(userGuess == secretNumber) {
                cout << "\nCongratulations! You guessed it!";
                cout << "The number was: " << secretNumber;
                cout << "Number of attempts: " << attempts;
                break;
            }
            else if(userGuess < secretNumber) {
                cout << "Too low! Try a higher number.";
            }
            else {
                cout << "Too high! Try a lower number.";
            }
            
        } while(true);
        
        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;
        
    } while(playAgain == 'y' || playAgain == 'Y');
    
    cout << "\nThanks for playing! Goodbye!";
    return 0;
}
