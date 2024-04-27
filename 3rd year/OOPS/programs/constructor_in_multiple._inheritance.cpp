#include <iostream>

using namespace std;

class A
{
    public:
    A()
    {
        cout << "A created" << endl;
    }
};

class B
{
    public:
    B()
    {
        cout << "B created" << endl;
    }
};

class C : public B, public A
{
    int a;
    public:
    C()
    {
        cout << "C created" << endl;
    }
};

int main()
{
    A obj1;
    // B obj2;
    // C obj3;

    return 0;
}