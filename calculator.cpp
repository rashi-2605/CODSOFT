#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b, choice;

public:
    void input();
    void output();
};

void Calculator::input() {
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    cout << "\nSelect Operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;
}

void Calculator::output() {
    switch (choice) {
        case 1:
            cout << "Addition = " << (a + b) << endl;
            break;
        case 2:
            cout << "Subtraction = " << (a - b) << endl;
            break;
        case 3:
            cout << "Multiplication = " << (a * b) << endl;
            break;
        case 4:
            if (b == 0) {
                cout << "Division not possible (divide by zero error)." << endl;
            } else {
                cout << "Division = " << (float)a / b << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

int main() {
    Calculator c;
    c.input();
    c.output();
    return 0;
}

