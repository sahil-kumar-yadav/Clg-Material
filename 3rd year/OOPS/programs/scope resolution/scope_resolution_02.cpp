#include<iostream>

using namespace std;

// property 2 To define a function outside a class

class A{
    private: // private ho to bhi chelllega
    void fun();
};

void A::fun(){
    cout<<"function of class A"<<endl;
}

int main(){
    A obj;
    // obj.fun();

    return 0;

}