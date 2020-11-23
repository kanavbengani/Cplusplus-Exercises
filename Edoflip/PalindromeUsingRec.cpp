#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

bool Palindrome(char str[20], int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    else
    {
        return Palindrome(str, ++start, --end);
    }
}

int main()
{
    char str[20];
    cin >> str;
    cout << Palindrome(str, 0, strlen(str) - 1);
}