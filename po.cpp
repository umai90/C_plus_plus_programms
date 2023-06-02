#include <iostream>
using namespace std;
int main () {
    int num,positive=0,negative=0,even=0,odd=0,zero=0;
    for(int i=0;i<20;i++){
        cout<<"enter number:";
        cin>>num;
        if(i>0){
            positive++;
        }
        if(i<0){
            negative++;
        }
        if(i%2==0){
            even++;
        }
        if(i%2!=0){
            odd++;
        }
        if(i==0){
            zero++;
        }
    }
    cout<<"positive number:"<<positive<<endl;
    cout<<"negative number:"<<negative<<endl;
    cout<<"even number:"<<even<<endl;
    cout<<"odd number:"<<odd<<endl;
    cout<<"zero number:"<<zero<<endl;
}
