// Problem statement
// Reverse the given string word wise. That is, the last word in given string should come at 1st place,
// last second word at 2nd place and so on. Individual words should remain as it is.
#include <iostream>
void reverse(char input[], int start, int end)
{
    while (start < end)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
}
void reverseStringWordWise(char input[])
{
    // Write your code here
    int previousSpaceIndex = -1;
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            reverse(input, previousSpaceIndex + 1, i - 1);
            previousSpaceIndex = i;
        }
    }
    reverse(input, previousSpaceIndex + 1, i - 1);
    reverse(input, 0, i - 1);
}
using namespace std;

int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
