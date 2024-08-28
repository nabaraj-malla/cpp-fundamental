// Problem statement
// Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int m, n, arr[1000][1000];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            // cin>>arr[i][j];
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
        sum = 0;
    }
    cout << endl;
}
