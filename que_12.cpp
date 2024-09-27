/*
Create a class called Time that has separate int member data for hours, minutes and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. A member function should display it in 11:59:59 format. A member function named add() should add two objects of type time passed as arguments. A main ( ) program should create two initialized values together, leaving the result in the third time variable. Finally it should display the value of this third variable
*/

#include<iostream>
using namespace std;
class Time{
    int hr,min,sec;
    public:
    Time(){
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int x,int y,int z){
        hr = x;
        min = y;
        sec = z;
    }
    Time add (Time t1,Time t2){
        Time t3;
        t3.hr = t1.hr + t2.hr;
        t3.min = t1.min + t2.min;
        t3.sec = t1.sec+ t2.sec;
        if (t3.sec >= 60)
        {
            t3.sec -= 60;
            t3.min++;
        }
        if (t3.min >= 60)
        {
            t3.min -= 60;
            t3.hr++;
        }if (t3.hr==24)
        {
            t3.hr = 0 ;
        }
        
        
        return t3;
    }
    void display(){
        cout<<"Time is : "<<hr<<":"<<min<<":"<<sec<<endl;
    }
};
int main(){
    int  x=0,y=0,z=0;
    cout<<"Time  1 : ";
    cin>>x>>y>>z;
    Time t1(x,y,z);
    cout<<"Time  2 : ";
    cin>>x>>y>>z;
    Time t2(x,y,z);
    Time t3;
    t3 = t3.add(t1,t2);
    t1.display();
    t2.display();
    t3.display();
}
