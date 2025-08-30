#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if(b == 0) {
        cout << "Error: Cannot divide by zero!";
        return 0;
    }
    return a / b;
}

int remainder(int a, int b) {
    if(b == 0) {
        cout << "Error: Cannot find remainder when dividing by zero!";
        return 0;
    }
    return a % b;
}

int main() {
    double num1, num2;
    char op;
    double result;
    
    cout << "Simple Calculator";
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    switch(op) {
        case '+':
            result = add(num1, num2);
            cout << num1 << " + " << num2 << " = " << result;
            break;
            
        case '-':
            result = subtract(num1, num2);
            cout << num1 << " - " << num2 << " = " << result;
            break;
            
        case '*':
            result = multiply(num1, num2);
            cout << num1 << " * " << num2 << " = " << result;
            break;
            
        case '/':
            result = divide(num1, num2);
            if(num2 != 0) {
                cout << num1 << " / " << num2 << " = " << result;
            }
            break;
            
        case '%':
            {
                int int1 = (int)num1;
                int int2 = (int)num2;
                int intResult = remainder(int1, int2);
                if(int2 != 0) {
                    cout << int1 << " % " << int2 << " = " << intResult;
                }
            }
            break;
            
        default:
            cout << "Invalid operator! Please use +, -, *, /, or %";
            break;
    }
    
    cout << "\nThank you for using the calculator!";
    return 0;
}
