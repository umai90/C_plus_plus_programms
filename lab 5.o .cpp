#include <iostream>
using namespace std;
int main() {
    int n, first = 0, second = 1, next = 0;
    cout << "Enter a number to generate Fibonacci sequence up to: ";
    cin >> n;
    cout << "Fibonacci sequence up to " << n << ": ";
    while (next <= n) {
        if (next != 0) {
            cout << ", ";
        }
        cout << next;
        first = second;
        second = next;
        next = first + second;
    }
    cout << endl;
    return 0;
}
