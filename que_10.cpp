/*
Create a class called Invoice that a hardware store might use to represent
an invoice for an item sold at the store. An Invoice should include four pieces
of information as instance.
Data Members ‐
 partNumber (type String)
 partDescription (type String)
 quantity of the item being purchased (type int)
 price_per_item (type double)
*/
#include <iostream>
#define num 4
using namespace std;
class Invoice
{
    string part_Number, part_Description;
    int _quantity;
    float amount, price_Per_Item;

public:
    void partNumber(string s)
    {
        part_Number = s;
    }
    void partDescription(string s)
    {
        part_Description = s;
    }
    void quantityOfTheItemBeingPurchase(int x)
    {
        _quantity = x;
    }
    void pricePerItem(int x)
    {
        price_Per_Item = x;
    }
    void display()
    {
        cout << part_Number << " : "
             << part_Description << " : "
             << _quantity << " : "
             << price_Per_Item << " : Rs."
             << amount << endl
             << endl;
    }
    void calculate()
    {
        amount = _quantity * price_Per_Item;
    }
};

int main()
{
    Invoice I1[2];
    string s;
    int x;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Part Number : ";
        getline(cin, s);
        I1[i].partNumber(s);

        cout << "Enter Part Number's Description : ";
        getline(cin, s);
        I1[i].partDescription(s);

        cout << "Enter Quantity of item have being purchaseed :  ";
        cin >> x;
        I1[i].quantityOfTheItemBeingPurchase(x);

        cout << "Enter Price of item : ";
        cin >> x;
        I1[i].pricePerItem(x);

        I1[i].calculate();
        cin.ignore();
    }
    for (int i = 0; i < 2; i++)
    {
        I1[i].display();
    }
}