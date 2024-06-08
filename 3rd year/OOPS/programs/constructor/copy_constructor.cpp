#include<iostream>

using namespace std;
class A{
    int x;
    public:
    A();
    A(int s){
        x = s;
    }

    void show(){
        cout<<"value of x is "<<x<<endl;
    }

    A(A &obj){
        x = -obj.x + 2;
    }
};
int main(){
    A a(10);
    A b = a;
    A c(a);
    a.show();
    b.show();
    c.show();
    return 0;
}