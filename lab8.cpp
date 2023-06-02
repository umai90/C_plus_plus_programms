#include <iostream>
using namespace std;
int main () {
    int sy=5;
    int arr[sy]={23,34,45,56,67};
    int high=arr[0];
    int low=arr[0];
    for(int i=0;i<=sy;i++){
        if(arr[i]>high){
            high=arr[i];
            cout<<"the current high number is:"<<high<<endl;
            if(arr[i]<low){
                    low=arr[i];
                    cout<<"the current low number is:"<<low<<endl;

            }
    }
    cout<<"the high number is :"<<high<<endl;
    cout<<"the low number is :"<<low<<endl;
}}
