#include <iostream>

using namespace std;

int main()
{
    int num;  // variable to store input number

    // prompt user for input
    cout << "Enter a series of numbers (-1 to stop): ";

    // read input in a loop until -1 is entered
    while (true)
    {
        cin >> num;  // read the input number

        if (num == -1)  // check if sentinel value is entered
        {
            break;  // exit the loop if sentinel value is entered
        }

        // do something with the input number
        cout << "You entered " << num << endl;
    }

    cout << "Program has ended." << endl;

    return 0;
}
