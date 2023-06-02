#include <iostream>
#include <vector>
using namespace std;
int main (){
    int x;
    vector<int>vect={2,3,45,5,6,2};
    for(int x:vect){
        cout<<x<<endl;
    }
    int itemref;
    for(int &itemref:vect){
        itemref=itemref*3;
    }
    for(int x:vect){
        cout<<x<<endl;
    }
}
