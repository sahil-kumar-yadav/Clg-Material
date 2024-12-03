#include<iostream>

using namespace std;
class Complex{
    int real,img;
    public:
    Complex(){}

    Complex(int r,int i){
        real = r;
        img = i;
    }

    void show(){
        cout<<real<<" + j "<<img<<endl;
    }

    Complex operator +(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main(){
    Complex c3;
    Complex c1(2,4);
    Complex c2(1,1);
    c3  = c1 + c2;
    c1.show();
    c2.show();
    c3.show();
    return 0;
}