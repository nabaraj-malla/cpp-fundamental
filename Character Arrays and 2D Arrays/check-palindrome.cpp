// Problem statement
// Given a string, determine if it is a palindrome, considering only alphanumeric characters.
#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[])
{
    // Write your code here
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    int i = 0, j = length - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
    cout << endl;
}