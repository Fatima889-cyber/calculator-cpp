#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    if (operation == '+') {
        cout << "Result = " << num1 + num2;
    }
    else if (operation == '-') {
        cout << "Result = " << num1 - num2;
    }
    else if (operation == '*') {
        cout << "Result = " << num1 * num2;
    }
    else if (operation == '/') {
        cout << "Result = " << num1 / num2;
    }
    else {
        cout << "Invalid Operator!";
    }

    return 0;
}

