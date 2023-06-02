#include <iostream>
using namespace std;
struct Student {
    int rollNumber;
    string semester;
    char section;
};

void displayTable(Student students[]) {
    cout << "Roll#\t\tSemester\tSection\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ")\t" << students[i].rollNumber << "\t\t" << students[i].semester << "\t\t" << students[i].section << endl;
    }
}
int main() {
    Student students[5];
    students[0].rollNumber = 200;
    students[0].semester = "second";
    students[0].section = 'A';
    students[1].rollNumber = 203;
    students[1].semester = "second";
    students[1].section = 'B';
    students[2].rollNumber = 205;
    students[2].semester = "third";
    students[2].section = 'C';
    students[3].rollNumber = 208;
    students[3].semester = "third";
    students[3].section = 'A';
    students[4].rollNumber = 210;
    students[4].semester = "first";
    students[4].section = 'B';
    displayTable(students);
    char choice;
    cout << "\nDo you want to change the section of any roll number? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        int rollNumber;
        char newSection;
        cout << "Enter the roll number for which you want to change the section: ";
        cin >> rollNumber;
        int index = -1;
        for (int i = 0; i < 5; i++) {
            if (students[i].rollNumber == rollNumber) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            cout << "Enter the new section: ";
            cin >> newSection;
            students[index].section = newSection;
            cout << "\nUpdated Table:\n";
            displayTable(students);
        } else {
            cout << "Roll number not found.\n";
        }
    }
    return 0;
}
