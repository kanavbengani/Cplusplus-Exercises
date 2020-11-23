class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den)
    {
        numerator = num;
        denominator = den;
    }
    ~Fraction()
    {
        cout << "Destructor has been called." << endl;
    }
    int getNumerator()
    {
        return numerator;
    }
    int getDenominator()
    {
        return denominator;
    }
    void multiply(Fraction &a, Fraction &b)
    {
        int finalNum = a.getNumerator() * b.getNumerator();
        int finalDen = a.getDenominator() * b.getDenominator();
        int factor = 1;
        for (int i = 1; i <= finalNum; i++)
        {
            if (finalNum % i == 0 && finalDen % i == 0)
            {
                factor = i;
            }
        }
        finalNum /= factor;
        finalDen /= factor;
        cout << finalNum << "/" << finalDen << endl;
    }
    void add(Fraction &a, Fraction &b)
    {
        int factor = 1;
        int ANum = a.getNumerator() * b.getDenominator();
        int BNum = b.getNumerator() * a.getDenominator();
        int FinalNum = ANum + BNum;
        int FinalDen = a.getDenominator() * b.getDenominator();
        for (int i = 1; i <= FinalDen; i++)
        {
            if (FinalNum % i == 0 && FinalDen % i == 0)
            {
                factor = i;
            }
        }
        FinalNum /= factor;
        FinalDen /= factor;
        cout << FinalNum << "/" << FinalDen << endl;
    }
};