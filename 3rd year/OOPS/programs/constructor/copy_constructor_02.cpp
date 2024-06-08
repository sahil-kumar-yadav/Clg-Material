#include<iostream>

using namespace std;

class A{
    int b;
    public:
    void get(){
        cout<<"b = "<<b<<endl;
    }
    // A();
    A(int x){
        b = 10;
    }

    A(A &obj){
        b = obj.b;
    }
};


int main(){
    A obj1(10);
    A obj2(obj1); // both are copy constructor
    A obj3 = obj1; // 

    obj2.get();
    obj3.get();

    return 0;

}