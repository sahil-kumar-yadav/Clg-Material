#include<iostream>

using namespace std;
class A{
    public:
    int x = 10;
};
class B:A{
    public:
    void show(){
        cout<<"printing"<<endl;
    }
};
int main(){
    B obj;
    // cout<<obj.x;
    obj.show();

    return 0;

}