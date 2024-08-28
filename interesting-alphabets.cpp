// Problem statement
// Print the following pattern for the given number of rows.

// Pattern for N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {
            char newch = ch + j - 1;
            cout << newch;
            j++;
        }
        cout << endl;
        i++;
    }
}
