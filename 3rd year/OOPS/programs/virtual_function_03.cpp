#include<iostream>

using namespace std;

class A{
    public:
    virtual void print(){
        cout<<"class A"<<endl;
    }
};
class B:public A{
    public:
    void print(){
        cout<<"class B"<<endl;
    }
};
int main(){
    B obj;
    A obj1; // makeing virtual doesnot effect this 
    obj1.print();
    

    return 0;

}