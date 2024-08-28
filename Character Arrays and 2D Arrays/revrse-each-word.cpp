// Problem statement
// Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to change the sentence such that each word in the sentence is reversed. A word is a combination of characters without any spaces.

// Example:
// Input Sentence: "Hello I am Aadil"
// The expected output will look, "olleH I ma lidaA".
#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char input[])
{
    int i = 0;
    while (input[i] != '\0')
    {
        int start = i;
        for (i = start; input[i] != ' '; i++)
        {
            if (input[i] == '\0')
                break;
        }
        int end = i - 1;
        while (start < end)
        {
            char temp = input[start];
            input[start] = input[end];
            input[end] = temp;
            start++;
            end--;
        }
        i++;
    }
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}