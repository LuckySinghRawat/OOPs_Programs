/*
Implement a C++ program to find the non-repeating characters in string.
Typical Input: graphic era university
Typical Output: c g h n p s t u v y
*/

// =======================================================================
            // CORRECT
// ==============================================

#include <iostream>
#include<string>
using namespace std;
class nonRepeating
{
    string arr = "graphic era university";

public:
    void display();
};

int main()
{
    nonRepeating n1;
    n1.display();
}


void nonRepeating ::display()
{
    int l = 0, j = 97;
    while (l != arr.length())
    {
        int count = 0,i=0;// i yaha aana tha
        char ch;
        while (arr[i] != '\0')
        {
            if (j == arr[i])
            {
                count++;
                ch = j;
            }
            i++;
        }
        if (count == 1)
        {
            cout << ch << ' ';
        }
        j++;
        l++;
    }
}

/*=========================================================
                 ALTERNATE
*/ ====================================================================

// void nonRepeating ::display()
// {
//     int i = 0, l = 0, j = 97;
//     while (l != arr.length())
//     {
//         int count = 0;
//         char ch;
//         while (arr[i] != '\0')
//         {
//             if (j == arr[i])
//             {
//                 count++;
//                 ch = j;
//             }
//             i++;
//         }
//         if (count == 1)
//         {
//             cout << ch << ' ';
//         }
//             j++;
//         l++;
//     }
// }

// ====================================================================

// void nonRepeating ::display()
// {
//     int i = 0;
//     while (arr[i] != '\0')
//     {
//         int count = 1, j = 0;
//         while (arr[j] != '\0')
//         {
//             if (arr[i] == arr[j] && i != j)
//             {
//                 count = - 1;
//             }
//             j++;
//         }
//         if (count == 1)
//         {
//             cout << arr[i] << ' ';
//         }
//         i++;
//     }
// }

// ====================================================================

// void nonRepeating::display() {
//     int freq[256] = {0};
//     for (int i = 0; arr[i] != '\0'; i++) {
//         freq[arr[i]]++;
//     }
//     for (int i = 0; arr[i] != '\0'; i++) {
//         if (freq[arr[i]] == 1) {
//             cout << arr[i] << ' ';
//         }
//     }
//     cout << endl;
// }