#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, j, k;
    cin >> n;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }
        j = 1, k = i;
        while (j <= i)
        {
            cout << k;
            k++;
            j++;
        }
        j = i - 1;
        k = 2 * j;
        while (j >= 1)
        {
            // k=2j;
            cout << k;
            k--;
            j--;
        }
        cout << endl;
        i++;
    }
}
