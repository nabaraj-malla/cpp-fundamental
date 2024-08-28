// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// 4444
// 4444
// 4444
// 4444
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
