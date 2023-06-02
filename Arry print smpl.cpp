#include <iostream>
using namespace std;
int main () {
    int arry[5]={2,3,4,5,5};
    double ver[5]={1.2,2.2,3.4,2.3,2.4};
    for(const auto vax:arry){
        cout<<vax<<endl;
    }
    for(const auto vax:ver){
        cout<<vax<<endl;
    }
}
