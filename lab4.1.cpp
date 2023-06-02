#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    float num1, num2, result;

    // Display the menu
    cout << "Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Sin angle" << endl;
    cout << "6. Cos angle" << endl;
    cout << "7. Tan angle" << endl;
    cout << "8. Square root" << endl;
    cout << "9. Power calculation" << endl;
    cout << "Enter your choice (1-9): ";
    cin >> choice;

    // Perform the selected operation based on user's choice
    switch(choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 == 0) {
                cout << "Error: Cannot divide by zero!" << endl;
            } else {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            break;
        case 5:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = sin(num1 * M_PI / 180.0); // Convert degrees to radians before calculating sin
            cout << "Result: " << result << endl;
            break;
        case 6:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = cos(num1 * M_PI / 180.0); // Convert degrees to radians before calculating cos
            cout << "Result: " << result << endl;
            break;
        case 7:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = tan(num1 * M_PI / 180.0); // Convert degrees to radians before calculating tan
            cout << "Result: " << result << endl;
            break;
        case 8:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 < 0) {
                cout << "Error: Cannot calculate square root of a negative number!" << endl;
            } else {
                result = sqrt(num1);
                cout << "Result: " << result << endl;
            }
            break;
        case 9:
            cout << "Enter a base number: ";
            cin >> num1;
            cout << "Enter an exponent: ";
            cin >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
