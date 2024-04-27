#include<iostream>

using namespace std;
class A{
    public:
    int a = 10;
    protected:
    int b = 20;
    // protectedfunction
    private:
    int c = 30;
    
   
};

class B:public A{
    public:
    int d = 40;
    void afxn(){
        cout<<b<<endl;
    }
    // void afxn1(){
    //     cout<<c<<endl; // not accessable in derived class
    // }
    

};
int main(){
    A Aobj;
    B Bobj; // same name rakhte hai to error aayega
    // cout<<obj.a<<endl; // accessable
    // cout<<obj.b<<endl; // not accessable
    // cout<<obj.c<<endl; // not accessable

    // cout<<Bobj.d<<endl;
    cout<<Bobj.a<<endl; // accessable
    // cout<<Bobj.b<<endl; // private not accessable
    // cout<<Bobj.c<<endl; // member not accessable
    Bobj.afxn();

    return 0;

}