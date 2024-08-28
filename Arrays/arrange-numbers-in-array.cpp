// Problem statement
// You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.

// Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.
#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    // Write your code here
    int val = 1;
    if (n % 2 == 0)
    {
        for (int i = 0; i <= (n - 1) / 2; i++)
        {
            arr[i] = val;
            val = val + 2;
        }
        val = n;
        for (int i = ((n - 1) / 2) + 1; i < n; i++)
        {
            arr[i] = val;
            val = val - 2;
        }
    }
    else
    {
        for (int i = 0; i <= (n - 1) / 2; i++)
        {
            arr[i] = val;
            val = val + 2;
        }
        val = n - 1;
        for (int i = ((n - 1) / 2) + 1; i < n; i++)
        {
            arr[i] = val;
            val = val - 2;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *arr = new int[n];
        arrange(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }
}