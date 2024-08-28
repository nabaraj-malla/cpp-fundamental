// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// 1
// 21
// 321
// 4321
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, k;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        k = i;
        while (j <= i)
        {
            cout << k;
            k--;
            j++;
        }
        cout << endl;
        i++;
    }
}
