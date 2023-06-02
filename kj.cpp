#include <iostream>
#include <iomanip>
using namespace std;
const int NUM_STUDENTS = 4;
const int NUM_SUBJECTS = 3;
int main() {
    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    int sums[NUM_STUDENTS] = {0};
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter marks for Student " << i + 1 << ":\n";
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> marks[i][j];
            sums[i] += marks[i][j];
        }
        cout << std::endl;
    }
    cout << "Student\tSubject 1\tSubject 2\tSubject 3\tTotal\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << i + 1 << "\t";
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            cout << std::setw(9) << marks[i][j] << "\t";
        }
        cout << sums[i] << "\n";
    }

    return 0;
}
