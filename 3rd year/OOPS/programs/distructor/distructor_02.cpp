#include<iostream>

using namespace std;

class A{
    public:
    A(){
        cout<<"Class A constructor"<<endl;
    }
    ~A(){
        cout<<"Class A distructor"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"Class  B constructor"<<endl;
    }
    ~B(){
        cout<<"Class  B distructor"<<endl;
    }
};
class C:public B,public A{
    public:
    C(){
        cout<<"Class C constructor"<<endl;
        cout<<endl;
    }
    ~C(){
        cout<<"Class C distructor"<<endl;
    }
};
int main(){
        C obj;

    return 0;

}