/*
Using the concept of operator overloading. Implement a program to overload
the following:
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement
*/

#include <iostream>
using namespace std;
class Number
{
    int num;

public:
    Number(int x)
    {
        num = x;
    }
    Number operator-()
    {
        return Number(-num);
    }

    Number& operator++()
    {
        num++;
        return *this;
    }
    Number operator++(int)
    {
        num++;
        return Number(num);
    }

    Number& operator--()
    {
        num--;
        return *this;
    }
    Number operator--(int v)
    {
        num--;
        return Number(num);
    }
    void display()
    {
        cout << num << endl;
    }
};

int main()
{
    Number n(5);
    cout << "Original Number : ";
    n.display();

    cout << "Unary - : ";
    n = -n;
    n.display();

    Number n1(5);
    cout << "Unary ++ Preincrement : ";
    n1 = ++n1;
    n1.display();

    Number n2(5);
    cout << "Unary -- Predecrement : ";
    n2 = --n2;
    n2.display();

    Number n3(5);
    cout << "Unary ++ Postincrement : ";
    Number temp = n3;
    n3++;
    temp.display();


    Number n4(5);
    cout << "Unary -- Postdecrement : ";
    Number temp1 = n4;
    n4--;
    temp.display();
}