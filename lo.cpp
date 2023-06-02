#include <iostream>
using namespace std;
int main(){
    int sez;
    sez = 5;
    int name[sez];
    int sal[sez];
    for(int i=0;i<5;i++){
        cout<<"enter ID number:";
        cin>>name[i];
        cout<<"enter salary:";
        cin>>sal[i];
    }
    cout<<"ID"<<"\t"<<"salary"<<endl;
    for(int j=0;j<5;j++){
        cout<<name[j]<<"\t"<<sal[j]<<endl;
    }
}
