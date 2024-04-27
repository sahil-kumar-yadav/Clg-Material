#include<iostream>

using namespace std;

class A{
    public:
    A(){
        cout<<"A created"<<endl;
    }
};

class B:public A{
    public:
    B(){
        cout<<"B created"<<endl;
    }
};
class C:public B{
    public:
    C(){
        cout<<"C created"<<endl;
    }
};
int main(){
    
    // A obj; // A ka constructor only
    // B obj1; // A then B
    C obj3; // A -> B --> C ka constructor
    
    return 0;

}