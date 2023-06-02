#include <iostream>
using namespace std;
int main () {
    double salery = 50.00;
    int count = 0;
    while (salery<100){
        salery=salery+0.02*salery;
        count++;
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"after "<<count<<"your salery is "<<salery;
    return 0;
}

