/*
    An electricity board charges the following rates to domestic users to 
    discourage large consumption of energy.
    For the first 100 units: - 60 P per unit 
    For the next 200 units: -80 P per unit
    Beyond 300 units: -90 P per unit
    All users are charged a minimum of Rs 50 if the total amount is more than 
    Rs 300 then an additional surcharge of 15% is added. 
    Implement a C++ program to read the names of users and number of units 
    consumed and display the charges with names
*/


#include<iostream>
using namespace std;
class electricity
{
    int unit,rupee;
    public:
    void setvalue(){
        cout<<"Enter unit: "<<endl;
        cin>>unit;
    }
    void display(){
        if (unit>=0 && unit<=100)
        {
            rupee=unit*0.6;
        }else if (unit>100 && unit<=300)
        {
            rupee = unit * 0.8;
        }else if(unit>300){
            rupee = unit*0.9;
        }
        else {
            cout<<"Enter positive number";
            setvalue();
        }

        if(rupee<=50){
            rupee = 50;
        }else if (rupee>300)
        {
            rupee = rupee + (rupee * 0.15);
        }
        cout<<"Your billing amount is : "<<rupee;
    }
};
int main(){
    electricity E1;
    E1.setvalue();
    E1.display();
}