#include<iostream>

using namespace std;

class A{
    public:
    int n;
    
    A(int x){
        n = x;
    }
    A(){}// this has to be declared if we are defining parameterized comprator
    
    void show(){
        cout<<"n "<<n<<endl;
    }
};

int main(){
    A a(10);
    A b;// this will give error if defult constructor is not defined
    a.show();

    return 0;
}