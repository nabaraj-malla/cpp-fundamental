#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(int *input, int size)
{
    // Write your code here
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (input[j] > input[j + 1])
            {
                int temp = input[j + 1];
                input[j + 1] = input[j];
                input[j] = temp;
            }
        }
    }
}
