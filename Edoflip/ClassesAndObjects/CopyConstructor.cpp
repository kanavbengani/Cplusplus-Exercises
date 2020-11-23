#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Student
{
public:
    char *name;
    int age;
    void display()
    {
        cout << this->age << endl;
        cout << this->name << endl;
    }
    Student()
    {
    }
    Student(char *name, int age)
    {
        this->age = age;
        // this->name = name; //Shallow Copy
        this->name = new char[sizeof(name)]; //Deep Copy
        strcpy(this->name, name);
    }
    Student(Student &S)
    { // Copy Constructor
        // this->name = S.name; Default Copy Constructor (Shallow)
        this->age = S.age;
        this->name = new char[sizeof(S.name)]; // Deep Copy
        strcpy(this->name, S.name);
    }
};

int main()
{
    char name[] = "Kanav";
    Student S1(name, 15);
    S1.display();
    Student S2(S1);
    S2.display();
    S2.name[2] = 't';
    S1.display();
    S2.display();

    // Copy Assignment Operator
    Student S3;
    S3 = S1;
    S3.display();
}