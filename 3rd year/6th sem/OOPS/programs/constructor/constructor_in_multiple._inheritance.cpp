#include <iostream>

using namespace std;

class A
{
public:
    A(){
        cout<<"Class A constructor"<<endl;
    }
    ~A(){
        cout<<"Class A distructor"<<endl;
    }
};

class B
{
public:
    B(){
        cout<<"Class  B constructor"<<endl;
    }
    ~B(){
        cout<<"Class  B distructor"<<endl;
    }
};

class C : public B, public A
{
    int a;

public:
    C(){
        cout<<"Class C constructor"<<endl;
        cout<<endl;
    }
    ~C(){
        cout<<"Class C distructor"<<endl;
    }
};

int main()
{
    // A obj1;
    // B obj2;
    C obj3;

    return 0;
}