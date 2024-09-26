/*
Construct a Program in C++ to show the working of function 
overloading(compile time polymorphism) by using a function named 
calculate Area () to calculate area of square, rectangle and triangle using 
different signatures as required.
*/

#include<iostream>
using namespace std;
class Area{
    public:

    void area(int base){
        cout<<"Area of Square : "<<base*base<<endl;
    }
    void area(int length,int base){
        cout<<"Area of Rectangle : "<<length*base<<endl;
    }
    void area(float height,int base){
        cout<<"Area of Triangle : "<<0.5*base*height<<endl;
    }

};
int main(){
    Area A1;
    int a,b;
    float c;
    
    cout<<"Enter side of Square for Area: " ; 
    cin>>a;
    A1.area(a);

    cout<<"Enter length and breath of rectangle for Area: " ; 
    cin>>a>>b;
    A1.area(a,b);

    cout<<"Enter height and base of Square for Area: " ; 
    cin>>a>>c;
    A1.area(c,a);
}