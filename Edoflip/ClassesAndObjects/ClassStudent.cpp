class Student
{
private:
    int age;

public:
    int weight;
    int rollNumber;
    void setAge(int a, int c)
    {
        if (c == 1234)
        {
            age = a;
        }
        else
        {
            cout << "Entered Wrong Password." << endl;
            return;
        }
    }
    int getAge()
    {
        return age;
    }
};