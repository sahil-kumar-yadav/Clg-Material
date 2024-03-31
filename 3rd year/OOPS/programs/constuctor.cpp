#include<iostream>

using namespace std;


class A{
    int x,y;
    public:
    A();
    void show(){
        cout<<x<<" "<<y<<endl;
    }
};

A::A(){
    x = 0;
    y = 0;
}

int main(){
    A a; // if ctor of A class is private then this will give error
    a.show();

    return 0;
}