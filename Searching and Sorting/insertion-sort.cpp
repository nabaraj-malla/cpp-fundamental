#include <iostream>
using namespace std;

void insertionSort(int *input, int size)
{
    int j;
    for (int i = 1; i < size; i++)
    {
        int min = input[i];
        for (j = i - 1; j >= 0 && input[j] > min; j--)
        {
            input[j + 1] = input[j];
        }
        input[j + 1] = min;
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
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}