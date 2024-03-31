#include<iostream>

using namespace std;

class A{
    public:
    int x;
};

int main(){
    A a;
    A *ptr = &a;
    ptr->x = 10;    
    cout<<a.x<<endl;
    return 0;
}