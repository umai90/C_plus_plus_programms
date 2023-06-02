#include <iostream>
using namespace std;
int main () {
   double num_1,sum;
   const double enter = 0.0254;
   cout<<"convert inches to meters"<<endl;
   cout<<"Enter inches =";
   cin>>num_1;
   sum=num_1*enter;
   cout<<"Meters ="<<sum<<"m"<<endl;
   return 0;
}
