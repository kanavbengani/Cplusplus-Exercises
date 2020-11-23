#include <iostream>
#include <stdlib.h>
#include "School.h"

using namespace std;

int main() {

    School TAMS;
    
    std::string studentName;

    Student Student1("Adam", 7);
    Student Student2("Bob", 1);
    Student Student3("Carl", 9);
    Student Student4("Drake", 4);
    Student Student5("Erik", 10);
    Student Student6("Faulkner", 2);
    Student Student7("Gober", 3);
    Student Student8("Hollingsworth", 8);
    
    TAMS.admission(Student1);
    TAMS.admission(Student2);
    TAMS.admission(Student3);
    TAMS.admission(Student4);
    TAMS.admission(Student5);
    TAMS.admission(Student6);
    TAMS.admission(Student7);
    TAMS.admission(Student8);

    cout << "Size: " << TAMS.getSchoolSize() << endl << endl;

    TAMS.expel("Carl");
    TAMS.expel("Bob");
    TAMS.expel("Erik");
    
}