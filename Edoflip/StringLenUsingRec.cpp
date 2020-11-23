#include <iostream>
#include <string>

using namespace std;

int length(char a[])
{
    if (a[0] == NULL)
    {
        return 0;
    }
    int recursion = length(a + 1);
    return ++recursion;
}

int main()
{
    char a[100] = "Hello Bye Thank you";
    cout << length(a) << endl;
}