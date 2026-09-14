#include <iostream>
using namespace std;

int main() {
    cout << "==============================" << endl;
    cout << "      C.C CALCULATOR" << endl;
    cout << "==============================" << endl;

    double num1, num2;
    char op;
    char choice;

    for (;;) {
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        double result;

        if (op == '+') {
            result = num1 + num2;
        }
        else if (op == '-') {
            result = num1 - num2;
        }
        else if (op == '*') {
            result = num1 * num2;
        }
        else if (op == '/') {
            if (num2 == 0) {
                cout << "Error: Division by zero!" << endl;
                continue;
            }
            result = num1 / num2;
        }
        else {
            cout << "Invalid operator!" << endl;
            continue;
        }

        cout << "Result: " << result << endl;

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

        cout << "==============================" << endl;
    return 0;
}
