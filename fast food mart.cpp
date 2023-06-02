#include <iostream>
using namespace std;

int main() {
    const int LARGE_PRICE = 1000;
    const int REGULAR_PRICE = 600;
    const int PERSONAL_PAN_PRICE = 300;
    const int STUFFED_CRUST_EXTRA_CHARGE = 150;
    int pizzaSize;
    string crustChoice;
    int numPizzas;
    int totalBill = 0;
    string sizeString;
    cout << "Welcome to the pizza ordering system!" << endl;
    cout << "Available pizza sizes:" << endl;
    cout << "1. Large (Rs.1000)" << endl;
    cout << "2. Regular (Rs.600)" << endl;
    cout << "3. Personal Pan (Rs.300)" << endl;
    cout << "4. Medium Level Training (Rs.800)" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> pizzaSize;
    switch (pizzaSize) {
        case 1:
            totalBill += LARGE_PRICE;
            sizeString = "large";
            break;
        case 2:
            totalBill += REGULAR_PRICE;
            sizeString = "regular";
            break;
        case 3:
            totalBill += PERSONAL_PAN_PRICE;
            sizeString = "personal pan";
            break;
        case 4:
            totalBill += 800;
            sizeString = "medium level training";
            break;
        default:
            cout << "Invalid choice. Exiting..." << endl;
            return 0;
    }
    cout << "Do you want stuffed crust? (yes/no): ";
    cin >> crustChoice;
    if (crustChoice == "yes") {
        if (pizzaSize == 1) {
            totalBill += STUFFED_CRUST_EXTRA_CHARGE;
        } else {
            cout << "Stuffed crust is only available for large pizzas. Continuing without stuffed crust." << endl;
        }
    }
    cout << "Enter the number of pizzas you want to order: ";
    cin >> numPizzas;
    totalBill *= numPizzas;
    cout << "You ordered " << numPizzas << " " << sizeString << " pizza";
    if (numPizzas > 1) {
        cout << "s";
    }
    cout << (crustChoice == "yes" ? " with stuffed crust." : ".") << endl;
    cout << "Your total bill is: Rs." << totalBill << "-\n";

    return 0;
}
