// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// *
// **
// ***
// ****
// Note : There are no spaces between the stars (*).
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i++;
    }
}
