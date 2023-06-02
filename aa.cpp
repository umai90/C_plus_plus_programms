#include <iostream>
using namespace std;
int main ( ) {
    const int student=4;
    const int sub=3;
    int mark[student][sub];
    int sum[student]={0};
    for (int i=0;i<4;i++){
        cout<<"marks student :"<<i+1<<endl;
        for(int j=0;j<=3;j++){
            cout<<"subject"<<j+1<<endl;
            cin>>mark[i][j];
            sum[i]=mark[i][j];
        }
    }
    cout<<endl;
    cout<<"student";
    cout<<"sub";
    cout<<"sub";
    cout<<"sub";
    for (int i=0;i<4;i++){
        cout<<"student"<<i+1<<endl;
        for(int j=0;j<3;j++){
            cout<<mark[i][j];
        }
    }
}
