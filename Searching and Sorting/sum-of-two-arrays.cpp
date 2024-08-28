// Problem statement
// Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively.
// Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index).
// The idea here is to represent each array/list as an integer in itself of digits N and M.

// You need to find the sum of both the input arrays/list treating them as two integers and
// put the result in another array/list i.e. output array/list will also contain only single digit at every index.
#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    // Write your code here
    int size;
    if (size1 > size2)
    {
        size = size1 + 1;
    }
    else
        size = size2 + 1;
    int i = size1 - 1, j = size2 - 1, k = size - 1, sum = 0, carry = 0, res = 0;
    while (i >= 0 && j >= 0)
    {
        sum = input1[i] + input2[j] + carry;
        res = sum % 10;
        carry = sum / 10;
        output[k] = res;
        i--;
        j--;
        k--;
    }
    while (i >= 0)
    {
        sum = input1[i] + carry;
        res = sum % 10;
        carry = sum / 10;
        output[k] = res;
        i--;
        k--;
    }
    while (j >= 0)
    {
        sum = input2[j] + carry;
        res = sum % 10;
        carry = sum / 10;
        output[k] = res;
        j--;
        k--;
    }
    output[k] = carry;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size1;
        cin >> size1;

        int *input1 = new int[size1];

        for (int i = 0; i < size1; ++i)
        {
            cin >> input1[i];
        }

        int size2;
        cin >> size2;

        int *input2 = new int[size2];

        for (int i = 0; i < size2; ++i)
        {
            cin >> input2[i];
        }

        int outsize = 1 + max(size1, size2);

        int *output = new int[outsize];

        sumOfTwoArrays(input1, size1, input2, size2, output);

        for (int i = 0; i < outsize; ++i)
        {
            cout << output[i] << " ";
        }

        delete[] input1;
        delete[] input2;
        delete[] output;
        cout << endl;
    }

    return 0;
}