#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#include "Class_Constructor.cpp"

int main()
{
    // Student S1;     // This calls the default constructor.
    Student S1(15, 65, 1); // This calls the parametrized constructor.
    Student *S2 = new Student(16, 59, 2);
    cout << S1.getAge() << " " << S1.getWeight() << " " << S1.rollNumber << endl;
    cout << S2->getAge() << " " << S2->getWeight() << " " << S2->rollNumber << endl;
}

// Add and multiply a + ib
// define class with addition and multiplication function.
// Have a main file which will return the values of the above function.