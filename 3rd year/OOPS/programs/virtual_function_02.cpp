#include<iostream>

using namespace std;

class A{
    public:
    // virtual void show() = 0; // pure virtual function
    
    virtual void show(){
        cout<<"Base class"<<endl;
    }
};
class B: public A{
    public:
    void show(){
        // method override
        cout<<"Derived class"<<endl;
    }
};
int main(){
    
  
    A aob;
    B bob;
    // A *ptr = &aob; // jis class ko point karvegy uska show function run hoga
    // A *ptr1 = &bob;   // derived --> e based on the type of object pointed
    // ptr1->show();
    // B *ptr3 = &aob;  // derived class pointer can't point to base class pointer
    return 0;

}