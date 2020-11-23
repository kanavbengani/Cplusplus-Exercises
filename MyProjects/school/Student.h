#include <iostream>
#include <stdlib.h>

using namespace std;

class Student {

private:
    std::string name;
    int score;

public:

    Student(std::string cName, int cScore) {
        name = cName;
        score = cScore;
    }

    // toString
    
    void toString() {
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
    }

    // Setters

    void setName(std::string sName) { name = sName; }

    void setScore(int sScore) { score = sScore; }

    // Getters

    std::string getName() { return name; }

    int getScore() { return score; }

};