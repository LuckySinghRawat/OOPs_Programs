/*
implement the c++ program to demonstrate the concept of data abstraction using the concept of Class and Objects
*/
#include<iostream>
using namespace std;
class info{
    int age;
    string name[100];
    public:
    void setInfo(){
        cout<<"Enter your name : "<<endl;
        cin>>name;
        cout<<"Enter your age"<<endl;
        cin>>age;
    }
    void display();
};
void info :: display(){
    cout << " Your name is : "<<name<<"  and your age is : "<<age<<endl;

}
int main(){
    info I1;
    I1.setInfo();
    I1.display();

}