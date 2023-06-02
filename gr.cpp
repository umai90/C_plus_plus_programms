#include <iostream>
using namespace std;
int main () {
    int sez,high,mini;
    sez = 10;
    int arry[sez]={23,34,54,43,67,34,89,90,35,67};
    high=arry[0];
    mini=arry[0];
    for(int i=0;i<10;i++){
        if(arry[i]>high){
            high=arry[i];
        }
        if(arry[i]<mini){
            mini=arry[i];
        }
}
    cout<<"high number:"<<high<<endl;;
    cout<<"low number:"<<mini;
}
