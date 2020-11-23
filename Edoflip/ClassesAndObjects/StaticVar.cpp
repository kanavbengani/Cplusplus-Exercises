#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Student
{
private:
    static int numOfStudents;

public:
    int roll;
    int age;

    Student()
    {
        numOfStudents++;
    }
    // static void display()
    // {
    //     cout << numOfStudents;
    // }
    static int get_numOfStudents()
    {
        return numOfStudents;
    }
};

int Student::numOfStudents = 0;

int main()
{
    Student S1;
    Student S2;
    Student S3;
    cout << Student::get_numOfStudents();
}