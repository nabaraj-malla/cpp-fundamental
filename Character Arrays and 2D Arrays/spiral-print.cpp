// For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:

// a. First row(left to right)
// b. Last column(top to bottom)
// c. Last row(right to left)
// d. First column(bottom to top)
//  Mind that every element will be printed only once.
#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    // Write your code here
    int len = nRows * nCols;
    int count = 0;
    int rs = 0, re = nRows - 1, cs = 0, ce = nCols - 1;
    while (count < len)
    {
        for (int i = cs; i <= ce; i++)
        {
            cout << input[rs][i] << " ";
            count++;
        }
        rs++;
        for (int i = rs; i <= re; i++)
        {
            cout << input[i][ce] << " ";
            count++;
        }
        ce--;
        for (int i = ce; i >= cs; i--)
        {
            cout << input[re][i] << " ";
            count++;
        }
        re--;
        for (int i = re; i >= rs; i--)
        {
            cout << input[i][cs] << " ";
            count++;
        }
        cs++;
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
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}