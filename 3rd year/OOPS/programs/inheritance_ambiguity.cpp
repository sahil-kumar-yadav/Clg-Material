#include <iostream>

using namespace std;
class A
{
public:
    A(){
        cout<<"A created"<<endl;
    }
    void display()
    {
        cout << "A " << endl;
    }
};
class B : public A
{
    public:
    B(){
        cout<<"B created"<<endl;
    }
    void display()
    {
        cout << "B " << endl;
    }
};

int main()
{
    // A aobj;
    B bobj;
    // bobj.display(); // drived class function will be called
    // aobj.display(); // same class display function will be called
    bobj.A::display();


    return 0;
}