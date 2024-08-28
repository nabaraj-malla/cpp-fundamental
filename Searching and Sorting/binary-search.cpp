// Problem statement
// You are given an integer array 'A' of size 'N', sorted in non-decreasing order.
// You are also given an integer 'target'. Your task is to write a function to search for 'target' in
// the array 'A'. If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1.

int binarySearch(int *input, int n, int val)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (input[mid] == val)
        {
            return mid;
        }
        else
        {
            if (input[mid] > val)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}