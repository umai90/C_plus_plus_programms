#include <iostream>
using namespace std;
int main () {
    int eggs,baskets,rem,minu,newm,typ;
    cout<<"Enter the number of eggs in each basket :";
    cin>>eggs;
    cout<<"Enter the number of baskets :";
    cin>>baskets;
    rem=eggs*baskets;
    cout<<"If you have"<<endl<<eggs<<" eggs per baskets and"<<endl<<baskets <<" baskets,then"<<endl;
    cout<<"the total number of eggs is "<<rem<<endl;
    cout<<"Now how many eggs you pick out of basket."<<endl;
    cin>>typ;
    cout<<"you have now"<<endl;
    minu=rem-typ*baskets;
    cout<<minu<<" eggs in baskets and"<<endl;
    cout<<baskets<<" baskets."<<endl;
    newm=minu*baskets;
    cout<<"the new number of eggs is"<<newm;
    return 0;
}
