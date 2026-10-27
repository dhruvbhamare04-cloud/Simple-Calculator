#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    int sum, sub, mul, div, mod;

    cout << "================================\n";
    cout << "       SIMPLE CALCULATOR\n";
    cout << "================================\n";

    cout << "Enter the first number  : ";
    cin >> a;

    cout << "Enter the second number : ";
    cin >> b;

    cout << "\n----------- MENU -----------\n";
    cout << "  1. Addition\n";
    cout << "  2. Subtraction\n";
    cout << "  3. Multiplication\n";
    cout << "  4. Division\n";
    cout << "  5. Remainder\n";
    cout << "----------------------------\n";

    cout << "Enter your choice : ";
    cin >> n;

    cout << "\n============================\n";

    switch (n) {
        case 1:
            sum = a + b;
            cout << "  Addition       = " << sum;
            break;

        case 2:
            sub = a - b;
            cout << "  Subtraction    = " << sub;
            break;

        case 3:
            mul = a * b;
            cout << "  Multiplication = " << mul;
            break;

        case 4:
            div = a / b;
            cout << "  Division       = " << div;
            break;

        case 5:
            mod = a % b;
            cout << "  Remainder      = " << mod;
            break;

        default:
            cout << "  Invalid choice!";
    }

    cout << "\n============================\n";

    return 0;
}
