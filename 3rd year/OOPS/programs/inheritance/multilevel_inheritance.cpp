#include<iostream>

using namespace std;

class A{
    int a1 = 10;
    protected:
    int a2 = 20;
    public:
    int a3 = 30;
};

class B:public A{
    int b1 = 1;
    protected:
    int b2 = 2;
    public:
    int b3 = 3;
};

class C:public B{
    int c1 = 100;
    protected:
    int c2 = 200;
    public:
    int c3 = 300;
    void printa1(){
        // cout<<a1<<endl; // not accessable private
    }
    void printa2(){
        cout<<"a2 = "<<a2<<endl; //  accessable inside inherited class
    }
    void printb1(){
        // cout<<b1<<endl; // not accessable inside inherited class - private
    }
    void printb2(){
        cout<<"b2 = "<<b2<<endl; //  accessable inside inherited class - private
    }
};

int main(){
    A o1;
    B o2;
    C o3;

    // cout<<o1.a1<<endl; // not accessable private
    // cout<<o1.a2<<endl; // not accessable protected
    // cout<<o1.a3<<endl; //  accessable public

    // cout<<o2.a1<<endl; // not accessable private
    // cout<<o2.a1<<endl; // not accessable protected
    // cout<<o2.a3<<endl; // accessable 

    o3.printa2(); // accessable protected 
    // o3.printb1();  not accessable
    o3.printb2();  // accessable

    return 0;

}