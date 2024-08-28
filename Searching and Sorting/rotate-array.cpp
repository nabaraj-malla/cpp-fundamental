// Problem statement
// You have been given a random integer array/list(ARR) of size N.
// Write a function that rotates the given array/list by D elements(towards the left).
#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    // Write your code here
    int i = d, j = 0;
    int *temp = new int[n];
    while (i < n)
    {
        temp[j] = input[i];
        i++;
        j++;
    }
    i = 0;
    while (j < n)
    {
        temp[j] = input[i];
        i++;
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        input[i] = temp[i];
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

        int d;
        cin >> d;

        rotate(input, d, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}