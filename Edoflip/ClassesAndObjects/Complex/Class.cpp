class Expression
{
private:
    int real;
    int imaginary;

public:
    Expression(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    int getReal()
    {
        return real;
    }
    int getImaginary()
    {
        return imaginary;
    }
    int multiply(Expression a, Expression b)
    {
        int r = (a.getReal() * b.getReal()) - (a.getImaginary() * b.getImaginary());
        int i = (a.getReal() * b.getImaginary()) + (b.getReal() * a.getImaginary());
        cout << r << " + " << i << "i" << endl;
    }
    int add(Expression a, Expression b)
    {
        int r = a.getReal() + b.getReal();
        int i = a.getImaginary() + b.getImaginary();
        cout << r << " + " << i << "i" << endl;
    }
};