#include <iostream>
using namespace std;
int main (){
    int number;
    cout<<"enter number :";
    cin>>number;
    for(int i=1;i<=number;i++){
        cout<<"weeks :"<<i<<endl;
        for(int j=1;j<=7;j++){
            if (i==2){
                break;
            }
            cout<<"days :"<<j<<endl;
        }
        cout<<"\n";
    }
}
