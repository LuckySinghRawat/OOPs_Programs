/*
Implement a Program in C++ by defining a class to represent a bank 
account.
Include the following:
Data Members
● Name of the depositor
● Account number
● Type of account (Saving, Current etc.)
● Balance amount in the account
Member Functions
● To assign initial values
● To deposit an amount
● To withdraw an amount after checking the balance
● To display name and balance
*/

#include<iostream>
using namespace std;
class Bank{
    string name;
    string accType;
    int accNo;
    int balance = 0;    //this initializing is important before using in any funtion
    public:
    void getdetail();
    void deposit();
    void withdraw();
    void display();
};
void Bank :: getdetail(){
    cout<<"Enter Name : ";
    cin >>name;
    cout<<"Enter Account Number : ";
    cin>>accNo;
    cout<<"Enter Account Type : ";
    cin>>accType;
}
void Bank :: deposit(){
    int amount;
    cout<<"Enter Amount to Deposit : ";
    cin>>amount;
    balance += amount;
}
void Bank :: withdraw(){
    int amount;
    cout<<"Enter Amount to Withdraw : ";
    cin>>amount;
    if(balance >= amount){
        cout<<"Withdraw all successful"<<endl;
        balance -= amount;
    }
    else{
        cout<<"You have Insufficient Balane"<<endl;
    }
}
void Bank :: display(){
    cout<<" Account Name : "<<name<<endl<<" Balance Amount "<<balance;
}
int main(){
    Bank B1;
    B1.getdetail();
    B1.deposit();
    B1.withdraw();
    B1.display();
}