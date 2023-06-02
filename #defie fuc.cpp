#include <iostream>
using namespace std;
#define max_grad 100
#define student 10
int total = 0;
main(){
    int grade[student],idx;
    for (idx=0;idx<student;idx++){
        cout<<"input the student grade:"<<idx+1<<":";
        cin>>grade[idx];

        while(idx>max_grad){
        cout<<"you have entered wrong grade"<<endl;
        cin>>grade[idx];
    }
    total+=grade[idx];
    }

    cout<<"the total grade is:"<<total<<endl;
    cout<<"the average grade is"<<total/student<<endl;

}

