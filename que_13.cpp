/*
Create class SavingsAccount. Use a static variable annualInterestRate to
store the annual interest rate for all account holders. Each object of the class
contains a private instance variable savingsBalance indicating the amount
the saver currently has on deposit. Provide method
calculateMonthlyInterest() to calculate the monthly interest by multiplying
the savingsBalance by annualInterestRate divided by 12.This interest
should be added tosavingsBalance. Provide a static method
modifyInterestRate() that sets the annualInterestRate to a new value. Write
a program to test class SavingsAccount. Instantiate two savingsAccount
objects, saver1 and saver2, with balances of Rs2000.00 and Rs3000.00,
respectively. Set annualInterestRate to 4%, then calculate the monthly
interest and print the new balances for both savers. Then set the
annualInterestRate to 5%, calculate the next month’s interest and print the
new balances for both savers
*/

#include <iostream>
using namespace std;
class savingAccount
{
    static float annualIntrestRate;
    float savingBalance;
    float temp;

public:
    savingAccount(int x)
    {
        savingBalance = x;
        temp = x;
        cout<<"Your Balance is : "<<savingBalance<<endl;
    }
    void calculateMonthlyIntrest()
    {
        savingBalance = savingBalance + (savingBalance * annualIntrestRate) / 12;
    }
    static void modifyIntrestRate(float x)
    {
        annualIntrestRate = x;
    }
    void display()
    {
        cout << " Your Total Saving Balance at "<<annualIntrestRate*100<<"% : " << savingBalance << endl;
        savingBalance = temp;
    }
}; 

float savingAccount :: annualIntrestRate = 0.00;

int main()
{
    savingAccount sv1(2000);
    savingAccount::modifyIntrestRate(0.04);
    sv1.calculateMonthlyIntrest();
    sv1.display();
    savingAccount::modifyIntrestRate(0.05);
    sv1.calculateMonthlyIntrest();
    sv1.display();


    savingAccount  sv2(3000);
    savingAccount::modifyIntrestRate(0.04);
    sv2.calculateMonthlyIntrest();
    sv2.display();
    savingAccount::modifyIntrestRate(0.05);
    sv2.calculateMonthlyIntrest();
    sv2.display();
}