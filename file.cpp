#include <iostream>
using namespace std;
int main() {
    int tryn;
    long long factorial=1;
    cout<<"select the number for the operation"<<"\n1.factorial"<<"\n2.Check number is prime or not"<<endl;
    cin>>tryn;
    switch (tryn){
        case 1:
            int x;
            cout<<"enter a number:";
            cin>>x;
            if(x<0){
                cout<<"enter positive number";
                break;
            }
            for(int i=1;i<=x;i++){
                factorial*=i;
                    }
            cout<<"the factorial is "<<factorial<<endl;
            break;
         case 2:
             int num;
             cout<<"enter a nmuber";
             cin>>num;
             bool is_prime;
             if (num < 2) {
                is_prime = false;
            }
            else {
                for (int i = 2; i <= num / 2; ++i) {
                    if (num % i == 0) {
                        is_prime = false;
                        break;
                    }
                }
            }
            if (is_prime) {
                cout << num << " is a prime number." << endl;
            }
            else {
                cout << num << " is not a prime number." << endl;
            }
            break;

        default:
            cout << "Error: Invalid choice." << endl;
            break;
    }

    return 0;
}
