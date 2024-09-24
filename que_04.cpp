/*
You are given an array of elements. Now you need to choose the best index 
of this array. An index of the array is called best if the special sum of this 
index is maximum across the special sum of all the other indices. To 
calculate the special sum for any index you pick the first element that is and 
add it to your sum. Now you pick next two elements i.e., and and add both 
of them to your sum. Now you will pick the next elements, and this continues 
till the index for which it is possible to pick the elements. Find the best index 
and in the output print its corresponding special sum. Note that there may 
be more than one best index, but you need to only print the maximum special 
sum.

Input/Output Format
Typical Input Expected Output
5
1 3 1 2 5                           8
10
2 1 3 9 2 4 -10 -9 1 3              9

*/

#include <iostream>
using namespace std;

int maxSpecialSum(int arr[], int n)
{

    int max_sum = arr[0];

    for (int i = 0; i < n; ++i)
    {
        int current_sum = 0;
        int elements_to_pick = 1;
        int j = i;

        while (j < n)
        {
            int end = j + elements_to_pick;
            if (end > n)
                break;

            // Add the elements in the current segment
            for (int k = j; k < end; ++k)
            {
                // cout << "i " << i << " " << "j " << j << " " << "current_sum " << current_sum << " " << "Elemen to pick " << elements_to_pick << " " << "end " << end << " "<<endl;
                current_sum += arr[k];
                // cout << "Current_sum : " << current_sum << " " << endl << endl;
            }

            j = end;
            elements_to_pick++;
        }

        // Update the maximum sum
        max_sum = max(max_sum, current_sum);
        // cout << "max_sum " << max_sum << endl
            //  << "-----------------------------------------------------";
    }

    return max_sum;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d = maxSpecialSum(arr, n);
    cout << "The max special sum is: " << d;
    return 0;
}

