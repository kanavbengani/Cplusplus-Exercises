#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Student
{
public:
    int roll;
    const int age;
    int &x;

    Student(int roll, int age) : x(age), roll(roll), age(age) {}
    void display()
    {
        cout << roll << endl;
        cout << age << endl;
        cout << x << endl;
    }
};

int main()
{
    Student S1(1, 15);
    S1.display();
}