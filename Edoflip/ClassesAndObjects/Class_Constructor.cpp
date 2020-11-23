class Student
{
private:
    int age;
    int weight;

public:
    int rollNumber;
    Student()
    {
        // This is a default constructor.
    }
    Student(int a, int b, int c)
    {
        // This is a parametrized constructor.
        age = a;
        weight = b;
        rollNumber = c;
    }
    int getAge()
    {
        return age;
    }
    int getWeight()
    {
        return weight;
    }
};