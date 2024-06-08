#include<iostream>

using namespace std;

class A{
    public:
    void show(){
        cout<<"Base class"<<endl;
    }
};
class B: public A{
    public:
    void show(){
        // method override
        cout<<"Drived class"<<endl;
    }
};
int main(){
    
    // B bobj;
    // bobj.show(); // method overide ho jayega drived class ka show run hoga
    A aob;
    B bob;
    // A *bptr = &aob; // base class ka pointer hai so base class
    A *bptr = &bob; // abhi bhi base class ka pointer hai so base class ka show function run 
    bptr->show();
    return 0;

}