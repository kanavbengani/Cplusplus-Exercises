#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

bool StrPal(std::string str, int start, int end)
{
    if (str[start] != str[end])
    {
        return false;
    }
    if (start < end)
    {
        return StrPal(str, start + 1, end - 1);
    }
    return true;
}

int main()
{
    std::string str;
    cin >> str;
    if (str.length() == 1)
    {
        cout << true;
        return 0;
    }
    cout << StrPal(str, 0, str.length() - 1);
}