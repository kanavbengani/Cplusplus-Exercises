#include <iostream>
using namespace std;
template <typename T, typename U>

class Pair
{
private:
    T x;
    U y;

public:
    void setx(T x)
    {
        this->x = x;
        cout << "X has been set." << endl;
    }
    void sety(U y)
    {
        this->y = y;
        cout << "Y has been set." << endl;
    }
    T getx()
    {
        return x;
    }
    U gety()
    {
        return y;
    }
};

using namespace std;

int main()
{
    // Pair<int, char> Int;
    // Int.setx(5);
    // Int.sety('A');
    // cout << Int.getx() << endl;
    // cout << Int.gety() << endl;

    Pair<Pair<int, int>, char> Test;
    Test.sety('A');
    Pair<int, int> smallTest;
    smallTest.setx(5);
    smallTest.sety(6);
    Test.setx(smallTest);
    cout << Test.gety() << endl;
    cout << Test.getx().getx() << endl;
    cout << Test.getx().gety() << endl;
}