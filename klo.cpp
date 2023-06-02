#include <iostream>
#include <string>
using namespace std;
const int MAX_EMPLOYEES = 100;
int main() {
    int numEmployees;
    numEmployees=3;
    string employeeRecords[MAX_EMPLOYEES][3];
    for (int i = 0; i < numEmployees; i++) {
        cout << "Enter details for employee " << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> employeeRecords[i][0];
        cout << "Employee Name: ";
        cin.ignore();
        getline(std::cin, employeeRecords[i][1]);
        cout << "Department Name: ";
        getline(std::cin, employeeRecords[i][2]);
        }
    cout << "\nEmployee Records:\n";
    cout << "ID\t\tName\t\tDepartment\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << employeeRecords[i][0] << "\t\t" << employeeRecords[i][1] << "\t\t" << employeeRecords[i][2] << "\n";
    }

    return 0;
}
