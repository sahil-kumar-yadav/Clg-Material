#include<iostream>

using namespace std;

class A{
    
    int a1 = 10;
    protected:
    int a2 = 20;
    public:
    A(){
        cout<<"A created "<<endl;
    }
    int a3 = 30;
};
class B{
    int b1 = 100;
    protected:
    int b2 = 200;
    public:
    int b3 = 300;
     B(){
        cout<<"B created "<<endl;
    }
};

class C:public B,public A{
    public:
    C(){
        cout<<"C created "<<endl;
    }
    void geta(){
        // cout<<"a1 = "<<a1<<endl; // not accessable private 
        cout<<"a2 = "<<a2<<endl; 
        cout<<"a3 = "<<a3<<endl;
    }
    void getb(){
        // cout<<"b1 = "<<b1<<endl; // not accessable - private
        cout<<"b2 = "<<b2<<endl;
        cout<<"b3 = "<<b3<<endl;
    }
 };
int main(){
    C obj;
    obj.geta();
    obj.getb();

    return 0;

}