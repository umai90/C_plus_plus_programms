#include <iostream>
using namespace std;
int main() {
    int sez=10;
    int ar=5;
    int arry[sez]={1,2,3,4,5,6,7,8,9,10};
    int star[ar];
    cout<<"First arry"<<endl;
    for (int i=0;i<5;i++){
        star[i]=arry[i];
        cout<<star[i]<<endl;
    }
     cout<<"second arry"<<endl;
     for (int j=arry[5];j<arry[9];j++){
        star[j]=arry[j];
        cout<<star[j]<<endl;
}
}
