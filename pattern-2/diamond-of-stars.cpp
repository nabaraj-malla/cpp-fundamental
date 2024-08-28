#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, space, j;
    cin >> n;
    int n1 = (n + 1) / 2;
    while (i <= n1)
    {
        space = 1;
        while (space <= n1 - i)
        {
            cout << " ";
            space++;
        }
        // j=2*i-1;
        j = 1;
        while (j <= 2 * i - 1)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
    int n2 = n - n1;
    i = n2;
    while (i >= 1)
    {
        space = 1;
        while (space <= n2 - i + 1)
        {
            cout << " ";
            space++;
        }
        j = 1;
        while (j <= 2 * i - 1)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i--;
    }
}
