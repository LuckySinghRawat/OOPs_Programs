/*
Imagine a tollbooth with a class called TollBooth. The two data items are of
type unsigned int and double to hold the total number of cars and total
amount of money collected. A constructor initializes both of these data
members to 0. A member function called payingCar( )increments the car
total and adds 0.5 to the cash total. Another function called nonPayCar( ).
increments the car total but adds nothing to the cash total. Finally a member
function called display( )shows the two totals. Include a program to test this
class. This program should allow the user to push one key to count a paying
car and another to count a non paying car. Pushing the ESC key should
cause the program to print out the total number of cars and total cash and
then exit.
*/

#include <iostream>
#include <conio.h>
using namespace std;
class Tollbooth
{
    unsigned int totalNumberOfCar;
    double totalAmountOfMoneyCollected;

public:
    Tollbooth()
    {
        totalNumberOfCar = 0;
        totalAmountOfMoneyCollected = 0;
    }
    void payingCar();
    void nonPayCar();
    void display();
};

void Tollbooth ::payingCar()
{
    totalNumberOfCar++;
    totalAmountOfMoneyCollected += 0.5;
}
void Tollbooth ::nonPayCar()
{
    totalNumberOfCar++;
}
void Tollbooth ::display()
{
    cout << "Total number of car : " << totalNumberOfCar << endl;
    cout << "Total Amount collected : Rs" << totalAmountOfMoneyCollected << endl;
}

int main()
{
    Tollbooth t;
    char c;
    cout << "Press P for paying cars" << endl;
    cout << "Press N for non-paying cars" << endl;
    cout << "Press ESC for Displaying the data" << endl;
    while (true)
    {
        c = _getch();
        if (c == 'P' || c == 'p')
        {
            t.payingCar();
            cout << "P" << endl;
        }
        else if (c == 'N' || c == 'n')
        {
            t.nonPayCar();
            cout << "N" << endl;
        }
        else if (c == 27)
        {
            t.display();
            break;
        }
        else
        {
            cout << "Inavalid Input" << endl;
        }
    }
    return 0;
}



// int main()
// {
//     Tollbooth T1;
//     char choice;
//     //  c = 1;
//     while (1)
//     {
//         // if (c == -1)
//         // {
//         //     break;
//         // }
//         cout << "Enter P-> ADD_payingCar :: N->ADD_nonPayingCar : ";
//         // cin >> choice;
//         choice = getch();
//         switch (choice)
//         {
//         case 1:
//             T1.payingCar();
//             break;
//         case 2:
//             T1.nonPayCar();
//             break;

//         case 27:
//             // c = -1;
//             // break;
//             T1.display();
//             exit(0);

//         default:
//             cout << "Enter valid CHOICE....\n";
//             break;
//         }
//     }
// }