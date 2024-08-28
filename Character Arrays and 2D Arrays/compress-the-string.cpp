// Problem statement
// Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.

// Example:
// If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".
// The string is compressed only when the repeated character count is more than 1.
// Note:
// Consecutive count of every character in the input string is less than or equal to 9. You are not required to print anything. It has already been taken care of. Just implement the given function and return the compressed string.
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string getCompressedString(string &input)
{
    int len = input.length();
    if (len == 0)
    {
        return "";
    }
    int s = 0, e = 0;
    string c = "";
    while (s < len)
    {
        while (e < len && input[e] == input[s])
        {
            e++;
        }
        int total = e - s;

        if (total != 1)
        {
            c += input[s];
            c += (char)(total + '0');
        }
        else
        {
            c += input[s];
        }
        s = e;
    }
    return c;
}

int main()
{
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}