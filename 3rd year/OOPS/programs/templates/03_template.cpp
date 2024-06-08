#include <iostream>

using namespace std;

template <class T>

class Number
{
    T num;

public:
    Number(T n)
    {
        num = n;
    }

    T getNum()
    {
        return num;
    }
};

int main()
{
    // Number<int> numberInt(7);
    // Number<double> numberDouble(7.7);
    
    Number<int> obj1(7);
    Number<double> obj2(7.7);
    cout << " int Number = " << obj1.getNum() << endl;
    cout << " double Number = " << obj2.getNum() << endl;
    return 0;
}