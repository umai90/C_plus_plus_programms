#include <iostream>
using namespace std;
int main () {
    int z=1;
    for(int i=1;i<=6;i++){
        for (int j=6-1;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=z;k++){
            cout<<"*";
        }
        z+=2;
        cout<<endl;
    }
    for(int i=6;i>=1;i--){
        for (int j=6-1;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
