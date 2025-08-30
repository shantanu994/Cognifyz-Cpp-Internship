#include <iostream>
using namespace std;

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series up to " << n << " terms:";
    
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            cout << first << " ";
        }
        else if(i == 2) {
            cout << second << " ";
        }
        else {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
    }
    cout << "";
}

int main() {
    int terms;
    
    cout << "Fibonacci Series Generator";
    
    cout << "\nEnter the number of terms: ";
    cin >> terms;
    
    if(terms <= 0) {
        cout << "Error: Please enter a positive number!";
    }
    else if(terms == 1) {
        cout << "Fibonacci Series: 0";
    }
    else if(terms == 2) {
        cout << "Fibonacci Series: 0 1";
    }
    else {
        fibonacciSeries(terms);
    }
    
    cout << "\nThank you for using Fibonacci Generator!";
    return 0;
}
