#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main () {

    int i=0;
    int a;
    std::vector<int> odd; 
    while(i<10) {
        cout << "Enter Number: " << endl;
        cin >> a;
        if (a % 2 != 0) {
            odd.push_back(a);
        }
        i++;
    }
    cout << "The vector elements are : " << endl;
    for(int i=0; i < odd.size(); i++) {
        cout << odd.at(i) << endl;
    }
        

}

