// Problem statement
// For a given input string(str), write a function to print all the possible substrings.

// Substring
// A substring is a contiguous sequence of characters within a string.
// Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[])
{
    // Write your code here
    int i = 0, k = 0;
    while (input[i] != '\0')
    {
        for (int j = i; input[j] != '\0'; j++)
        {
            for (k = i; k <= j; k++)
            {
                cout << input[k];
            }
            cout << endl;
        }
        i++;
    }
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}