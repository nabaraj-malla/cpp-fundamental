// Problem statement
// You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2).
// Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these,
// there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    // Write your code here
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                return arr[i];
        }
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

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << duplicateNumber(input, size) << endl;
    }

    return 0;
}