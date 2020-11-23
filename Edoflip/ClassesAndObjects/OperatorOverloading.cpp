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
    // Fraction operator*(const Fraction F)
    // {
    //     int top = this->numerator * F.numerator;
    //     int bottom = this->denominator * F.denominator;
    //     Fraction Result(top, bottom);
    //     return Result;
    // }
    Fraction &operator++()
    { //Pre - increment
        this->numerator = this->numerator + this->denominator;
        return (*this);
    }
    Fraction operator++(int)
    {
        Fraction FNew(this->numerator, this->denominator);
        this->numerator += this->denominator;
        return FNew;
    }
    Fraction &operator+=(Fraction F)
    {
        int LCM = this->denominator * F.denominator;
        int top = ((LCM / this->denominator) * this->numerator) + ((LCM / F.denominator) * F.numerator);
        this->numerator = top;
        this->denominator = LCM;
        return (*this);
    }
    void Display()
    {
        cout << this->numerator << "/" << this->denominator << endl;
    }
};

int main()
{
    Fraction F1(2, 4);
    Fraction F2(2, 6);
    (F1 += F2) += F2;
    F1.Display();
}