#include <iostream>
#include <string>
using namespace std;

void reverseStringSwap(string s) {
    int n = s.length();
    for(int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
    cout << "\nReversed string: " << s;
}

int main() {
    string input;
    
    cout << "=== String Reversal Program ===";
    
    cout << "Enter a string to reverse: ";
    getline(cin, input);
    
    if(input.empty()) {
        cout << "Error: Please enter a valid string!";
        return 0;
    }
    
    cout << "\nOriginal string: " << input;
    
    reverseStringSwap(input);
    
    cout << "\nThank you for using String Reversal Program!";
    return 0;
}