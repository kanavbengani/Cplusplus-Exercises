#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Student.h"

using namespace std;

class School {
private: 
    int schoolSize;
    std::vector<Student> schoolVect;

public:
    School() {
        schoolSize = 0;
    }

    int getSchoolSize() { return schoolSize; }

    void admission(Student student) {
        if (student.getScore() >= 7) {
            schoolVect.push_back(student);
            schoolSize = schoolVect.size();
            cout << student.getName() << " has been admitted!" << endl;
        }
        else {
            cout << student.getName() << " has been rejected!" << endl;
        }
    }

    void expel(std::string studentName) {
        for (int i = 0; i < schoolVect.size(); i++) {
            if (schoolVect.at(i).getName() == studentName) {
                cout << schoolVect.at(i).getName() << " has been expelled." << endl;
                schoolVect.erase(schoolVect.begin()+i);
                cout << "New Size: " << schoolVect.size() << endl;
                return;
            }   
        }
        cout << "Invalid Name!" << endl;
        cout << "New Size: " << schoolVect.size() << endl;

    }
};