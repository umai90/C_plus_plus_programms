#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int first, total=0;
    char choice;
    do{
        cout<< "1. Burger Hub \n2. Pizza Station"<<endl;
        cin>>first;
        switch(first){
            case 1:
                int ry,ty,we;
                char te;
                cout<<"1.Chicken"<<setw(5)<<" = 300 \n2.Beef = 400"<<setw(5)<<endl;
                cin>>ry;
                if(ry == 1){
                    total +=300;
                }else{
                    total +=400;
                }
                cout<<"1.Cheese"<<setw(5)<<" = 150 \n2.Without Cheese"<<endl;
                cin>>ty;
                if(ty == 1 ){
                    total +=150;
                }else{
                    total +=0;
                }
                cout<<"make it a meal with fries and drink"<<setw(3)<<" = 200"<<endl;
                cout<<"y \ n"<<endl;
                cin>>te;
                if (te == 'y'){
                    total +=200;
                }else{
                    total +=0;
                }
                break;
            case 2:
                int ru,tu,tr;
                char me;
                cout<<"Welcome to the Pizza Hub"<<endl;
                cout<<"choose"<<endl;
                cout<<"1.Small"<<endl<<"2.Medium"<<endl<<"3.Large"<<endl;
                cin>>ru;
                cout<<"Choose the flavoiur \n1.Fajita \n2.Pepperoni"<<endl;
                cin>>tr;
                if(ru == 1 && tr ==1){
                        cout<<"Small Fajita = 250"<<endl;
                        total +=250;
                }
                if(ru == 1 && tr ==2){
                        cout<<"Small Pepperoni = 350"<<endl;
                        total +=350;
                }
                if(ru == 2 && tr ==1){
                        cout<<"Medium Fajita = 650"<<endl;
                        total +=650;
                }
                if(ru == 2 && tr ==2){
                        cout<<"Medium Pepperoni = 750"<<endl;
                        total +=750;
                }
                if(ru == 3 && tr ==1){
                        cout<<"Large Fajita = 850"<<endl;
                        total +=850;
                }
                if(ru == 3 && tr ==2){
                        cout<<"Large Pepperoni = 950"<<endl;
                        total +=950;
                }else{
                    total +=0;
                }
                cout<<"Make it a meal with fries and drink  =200"<<endl;
                cout<<"y \ n"<<endl;
                cin>>me;
                if(me == 'y' || me =='Y' ){
                    total +=200;
                }else{
                    total +=0;
                }
                break;
            default:
                cout<<"Enter the correct number"<<endl;
        }
        cout<<total<< " = is your total bill"<<endl;
        cout<<"do you want to order again\ny \ n"<<endl;
        cin>>choice;
    }while(choice == 'y'||choice == 'Y');
}
