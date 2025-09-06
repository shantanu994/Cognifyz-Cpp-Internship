#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string choices[3] = {"rock", "paper", "scissors"};
    int userChoice, computerChoice;

    cout << "--Rock-Paper-Scissors Game--\n";
    cout << "Choose:\n1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if(userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    srand(time(0));
    computerChoice = (rand() % 3) + 1;

    cout << "You chose: " << choices[userChoice - 1] << endl;
    cout << "Computer chose: " << choices[computerChoice - 1] << endl;

    if(userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if((userChoice == 1 && computerChoice == 3) ||
              (userChoice == 2 && computerChoice == 1) ||
              (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}