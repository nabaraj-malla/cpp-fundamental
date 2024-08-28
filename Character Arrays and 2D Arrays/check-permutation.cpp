// Problem statement
// For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[])
{
    // Write your code here
    int len1 = strlen(input1);
    int len2 = strlen(input2);
    if (len1 != len2)
    {
        return false;
    }
    int frequencyArray[256] = {0};
    for (int i = 0; input1[i] != '\0'; i++)
    {
        frequencyArray[input1[i]]++;
    }
    for (int i = 0; input2[i] != '\0'; i++)
    {
        --frequencyArray[input2[i]];
    }
    for (int i = 0; i < 256; i++)
    {
        if (frequencyArray[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
    cout << endl;
}