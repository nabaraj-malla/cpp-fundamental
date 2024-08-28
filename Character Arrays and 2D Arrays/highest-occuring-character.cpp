// Problem statement
// For a given a string(str), find and return the highest occurring character.

// Example:
// Input String: "abcdeapapqarr"
// Expected Output: 'a'
// Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
// If there are two characters in the input string with the same frequency, return the character which comes first.

// Consider:
// Assume all the characters in the given string to be in lowercase always.
#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[])
{
    // Write your code here
    int frequencyArray[256] = {0};
    int len = strlen(input);
    for (int i = 0; i < len; i++)
    {
        frequencyArray[input[i]]++;
    }
    char maxChar = input[0];
    int maxCount = frequencyArray[input[0]];
    for (int i = 1; i < len; i++)
    {
        if (frequencyArray[input[i]] > maxCount)
        {
            maxCount = frequencyArray[input[i]];
            maxChar = input[i];
        }
    }
    return maxChar;
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str) << endl;
}