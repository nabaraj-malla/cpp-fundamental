// Problem statement
// You have been given a random integer array/list(ARR) of size N.
// You are required to find and return the second largest element present in the array/list.

#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    // Write your code here
    int largest = -2147483648, secondLargest = -2147483648;
    for (int i = 0; i < n; i++)
    {
        if (input[i] > largest)
        {
            secondLargest = largest;
            largest = input[i];
        }
        else if (input[i] > secondLargest && input[i] != largest)
        {
            secondLargest = input[i];
        }
    }
    if (largest == secondLargest)
    {
        return -2147483648;
    }
    else
    {
        return secondLargest;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = findSecondLargest(arr, n);
    cout << ans << endl;
    return 0;
}
