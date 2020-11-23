#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include "ClassStudent.cpp"

int main()
{
    Student S1; // Defined as Static
    Student S2; // Defined as Static
    S1.setAge(15, 1234);
    S1.weight = 65;
    S1.rollNumber = 1;
    S2.setAge(16, 12);
    S2.weight = 59;
    S2.rollNumber = 2;
    cout << S1.getAge() << " " << S1.weight << " " << S1.rollNumber << endl;
    cout << S2.getAge() << " " << S2.weight << " " << S2.rollNumber << endl;
}