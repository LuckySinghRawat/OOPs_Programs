/*
Define a class Hotel in C++ with the following specifications
Private members
• Rno Data member to store room number
• Name Data member to store customer name
• Tariff Data member to store per day charges
• NOD Data member to store number of days of stay
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the 
value of days* Tariff >10000,
then total amount is 1.05* days*Tariff.
Public members
• Checkin() Function to enter the content Rno, Name, Tariff and NOD
• Checkout() Function to display Rno, Name, Tariff,
NOD and Amount (amount to be displayed by calling function) CALC()
*/
#include<iostream>
using namespace std;
class Hotel{
    int roomNo;
    char name[50];
    float traiff;
    int NOD;
    int calculate();
    public:
    void checkIn();
    void checkOut();
};
void Hotel :: checkIn(){
    cout<<"Enter name of customer : ";
    cin>>name;
    cout<<"Enter RoomNumber : ";
    cin>>roomNo;
    cout<<"Enter tariff per day : ";
    cin>>traiff;
    cout<<"Enter number of days lived in : ";
    cin>>NOD;
}
void Hotel :: checkOut(){
    cout<<" Room Number : "<<roomNo<<endl<<" Name   : "<<name<<endl<<" Tariff : "<<traiff<<endl<<" NOD : "<<NOD<<endl<<" Amount : "<<calculate();
}

int Hotel :: calculate(){
    int amount;
    amount = NOD*traiff;
    if (NOD*traiff > 10000){
        amount = 1.05*amount;
    }
    return amount;
}
int main(){
    Hotel h1;
    h1.checkIn();
    h1.checkOut();
}