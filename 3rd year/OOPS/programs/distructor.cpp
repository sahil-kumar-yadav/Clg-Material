#include<iostream>

using namespace std;

class A{
    int x;
    public:
    A(){
        x = 0;
        cout<<"constructor intialized the value of x"<<endl;
    }
    ~A(){
        
        cout<<"Distructor deleted the object at the end of  program"<<endl;
    }
};
int main(){
    A a;
    int x;
    int y;
    cout<<"hello"<<endl;
    cout<<"hello"<<endl;
    cout<<"hello"<<endl;
    cout<<"hello"<<endl;
    return 0;
}