/*
Create a class Complex having two int type variable named real & img
denoting real and imaginary part respectively of a complex number.
Overload +, - , == operator to add, to subtract and to compare two complex
numbers being denoted by the two complex type objects
*/
#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex c2)
    {
        return Complex(real + c2.real, img + c2.img);
    }
    Complex operator-(Complex c2)
    {
        return Complex(real - c2.real, img - c2.img);
    }
     bool operator==(Complex c2) {
        return (real == c2.real) && (img == c2.img);
    }
    void display()
    {
        cout << real << (img<0?" - ":" + ") << (img<0?-img:img)<< "i" << endl;
    }
};
int main()
{
    Complex c1(3, 4);
    Complex c2(1, 7);
    Complex c3 = c1 + c2;
    c3.display();
    c3 = c1 - c2;
    c3.display();
    if (c1 == c2) {
        cout << "c1 and c2 are equal" << endl;
    } else {
        cout << "c1 and c2 are not equal" << endl;
    }
}
