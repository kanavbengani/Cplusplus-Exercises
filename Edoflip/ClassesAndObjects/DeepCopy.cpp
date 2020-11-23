#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Student
{
private:
    int age;
    int rollNumber;

public:
    char *name;
    Student(int age, char *name)
    {
        this->age = age;
        // this->name = name; //Shallow Copy
        this->name = new char[sizeof(name)]; //Deep Copy
        strcpy(this->name, name);
        cout << "Parametrized constructor is called." << endl;
    }
    void display()
    {
        cout << age << ", " << name << endl;
    }
};

int main()
{
    char name[] = "Kanav";
    Student S1(15, name);
    S1.display();
    name[2] = 't';
    Student S2(14, name);
    S2.display();
    S1.display();
}