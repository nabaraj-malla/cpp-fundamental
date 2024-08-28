// Problem statement
// For a given string(str), remove all the consecutive duplicate characters.

// Example:
// Input String: "aaaa"
// Expected Output: "a"

// Input String: "aabbbcc"
// Expected Output: "abc"
#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[])
{
    char lastChar = input[0];
    int j = 1;
    for (int i = 1; input[i] != '\0'; i++)
    {
        if (input[i] != lastChar)
        {
            input[j] = input[i];
            j++;
            lastChar = input[i];
        }
    }
    input[j] = '\0';
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str << endl;
}