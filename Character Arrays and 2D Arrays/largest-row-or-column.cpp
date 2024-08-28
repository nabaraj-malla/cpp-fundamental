// Problem statement
// For a given two-dimensional integer array/list of size (N x M),
// you need to find out which row or column has the largest sum(sum of all the elements in a row or column) amongst all the rows/columns.
#include <iostream>
using namespace std;

/*
You can use minimum value of integer as -2147483647 and
maximum value of integer as 2147483647
*/
void findLargest(int **input, int nRows, int mCols)
{
    int rowIndex = 0, rowSum = -2147483648, newRowSum = 0, colIndex = 0, colSum = -2147483648, newColSum = 0;
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            newRowSum += input[i][j];
        }
        if (newRowSum > rowSum)
        {
            rowSum = newRowSum;
            rowIndex = i;
        }
        newRowSum = 0;
    }
    for (int j = 0; j < mCols; j++)
    {
        for (int i = 0; i < nRows; i++)
        {
            newColSum += input[i][j];
        }
        if (newColSum > colSum)
        {
            colSum = newColSum;
            colIndex = j;
        }
        newColSum = 0;
    }
    if (colSum > rowSum)
    {
        cout << "column" << " " << colIndex << " " << colSum;
    }
    else
    {
        cout << "row" << " " << rowIndex << " " << rowSum;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;

        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }

        findLargest(input, row, col);
        cout << endl;
    }
}