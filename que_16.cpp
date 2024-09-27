/*
Using the concept of operator overloading. Implement a program to overload 
the following:
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement

with fried fution
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
    friend Number operator-(Number n)
    {
        return Number(-n.num);
    }

    friend Number& operator++(Number& n)
    {
        n.num++;
        return n;
    }
    friend Number operator++(Number& n, int)
    {
        Number temp = n;
        n.num++;
        return temp;
    }

    friend Number& operator--(Number& n)
    {
        n.num--;
        return n;
    }
    friend Number operator--(Number& n, int)
    {
        Number temp = n;
        return temp;
    }
    friend ostream& operator<<(ostream& os, const Number& n)
    {
        os << n.num << endl;
        return os;
    }
};

int main()
{
    Number n(5);
    cout << "Original Number : ";
    cout << n;

    cout << "Unary - : ";
    n = -n;
    cout << n;

    Number n1(5);
    cout << "Unary ++ Preincrement : ";
    n1 = ++n1;
    cout << n1;

    Number n2(5);
    cout << "Unary -- Predecrement : ";
    n2 = --n2;
    cout << n2;

    Number n3(5);
    cout << "Unary ++ Postincrement : ";
    Number temp = n3;
    n3++;
    cout << temp;

    Number n4(5);
    cout << "Unary -- Postdecrement : ";
    Number temp2 = n4;
    n4--;
    cout << temp2;
}