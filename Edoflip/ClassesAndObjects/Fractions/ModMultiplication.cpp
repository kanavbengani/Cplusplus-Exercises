#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    Fraction Multiply(const Fraction F)
    {
        int top = this->numerator * F.numerator;
        int bottom = this->denominator * F.denominator;
        Fraction Result(top, bottom);
        return Result;
    }
    void Display()
    {
        cout << this->numerator << endl;
        cout << this->denominator << endl;
    }
};

int main()
{
    Fraction F1(2, 4);
    Fraction F2(2, 6);
    F1.Multiply(F2).Display();
}