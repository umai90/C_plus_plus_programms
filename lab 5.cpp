#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number:"<<endl;
    cin>>x;
    cout<<"number"<<"\tSquare"<<"\tcube"<<endl;
    for(int i=1;i<=x;i++){
        cout<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
        }
    return 0;
}
