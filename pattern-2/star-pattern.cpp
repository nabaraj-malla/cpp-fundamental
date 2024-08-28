#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, j;
    cin >> n;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }
        j = 1;
        while (j <= i)
        {
            cout << '*';
            j++;
        }
        j = i - 1;
        while (j >= 1)
        {
            cout << '*';
            j--;
        }
        cout << endl;
        i++;
    }
}
