#include <iostream>
using namespace std;
#define MAX_GRADE 100
#define STUDENTS 4
int total=0;
int grade[STUDENTS],i;
int main () {
    for(i=1;i<=STUDENTS;i++){
        cout<<"enter the grade of student"<<i+1<<" ";
        cin>>grade[i];
        while(grade[i]>MAX_GRADE){
            cout<<"enter below 100"<<endl;
            cin>>grade[i];
        }
        total+=grade[i];
    }
    cout<<"the avreage grade is:"<<total/4;
}

