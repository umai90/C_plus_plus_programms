#include <iostream>
using namespace std;
int main () {
    cout<<"enter id, name and department number"<<endl;
    string arry[3][3];
    for(int i=0;i<=3;i++){
        cout<<"enter employee name:"<<endl;
        cin>>i;
        for(int j=0;j<3;j++){
            cout<<"enter id number"<<endl;
            cin>>j;
        }
        for(int k=0;k<3;k++){
            cout<<"enter department name:"<<endl;
            cin>>k;
        }
    }
    cout<<"ID"<<"\t"<<"Name"<<"\t"<<"department name"<<endl;
     for(int l=0;l<=3;l++){
        cout<<arry[l];
        }
    }
}
