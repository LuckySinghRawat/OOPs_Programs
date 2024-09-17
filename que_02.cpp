/*
    Construct a C++ program that removes a specific character from a given 
    string and return the updated string. 
    Typical Input: computer science is the future
    Typical Output: compuer science is he fuure
*/

#include<iostream>
#include<string>
using namespace std;
class Remove
{
    char s1[100],s,s2[100];
    public:
    void input(){
        cout<<"Typical Input : "<<endl;
        gets(s1);
        cout<<"Enter any letter to remove "<<endl;
        cin>>s;
    }
    void logic(){
        int i=0,j=0;
        while (s1[i]!='\0')
        {
            if (s1[i]!=s)
            {
                s2[j]=s1[i];
                ++j;
            }
                ++i;
        }

    }
    void display(){
        cout<<"Typical Output : "<<s2;   
    }
};

int main(){
    Remove r1;
    r1.input();
    r1.logic();
    r1.display();
}