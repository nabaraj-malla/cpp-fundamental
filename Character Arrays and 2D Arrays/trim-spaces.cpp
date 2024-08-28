// Problem statement
// Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.

// There can be multiple spaces present after any word.
#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[])
{
    // Write your code here
    int size = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        size++;
    }
    for (int i = 0; i < size; i)
    {
        if (input[i] == ' ')
        {
            int j = i;
            while (j < size)
            {
                input[j] = input[j + 1];
                j++;
            }
            size = size - 1;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
