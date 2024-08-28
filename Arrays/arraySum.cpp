// Problem statement
// Given an array of length N, you need to find and print the sum of all elements of the array.
#include <iostream>
using namespace std;
int main()
{
    int a[1000000], n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << sum << endl;
    return 0;
}
