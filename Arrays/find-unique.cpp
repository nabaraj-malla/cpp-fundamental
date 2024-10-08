// Problem statement
// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.
#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    // Write your code here
    int i = 0;
    while (i < size)
    {
        int temp = arr[i], count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == temp)
            {
                count++;
            }
        }
        if (count == 1)
        {
            return temp;
        }
        i++;
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}