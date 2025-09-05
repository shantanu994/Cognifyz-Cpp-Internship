#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of Subjects: ";
    cin >> n;

    int marks[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        cout << "Enter the marks of Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
       
    }
    int Average = total / n;
    if(Average >= 90) {
        cout << "Grade: A";
    }
    else if(Average >= 80) {
        cout << "Grade: B";
    }
    else if(Average >= 70) {
        cout << "Grade: C";
    }
    else if(Average >= 60) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: F";
    }
    return 0;
}