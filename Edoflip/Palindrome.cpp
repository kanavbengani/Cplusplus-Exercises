#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main () {
    int num;
    std::vector<int> numberVect;
    int calc;
    cout << "Enter a number: ";
    cin >> num;
    int cnum = num;
    int k;
    while(cnum != 0) {
        calc = cnum % 10;
        numberVect.push_back(calc);
        cnum = cnum / 10;
        cout << numberVect.at(k) << endl;
        k++;
    }

    int begin = 0;
    int end = numberVect.size() - 1;
    int i = 0;
    while (end - begin >= 1) {
        if (numberVect.at(end-i) == numberVect.at(begin+i)) {
            end--;
            begin++;
            i++;
        }
        else {
            cout << num << " is not a palindrome number." << endl;
            return 1;
        }
    }
    cout << num << " is a palindrome number." << endl;
    return 0;
}