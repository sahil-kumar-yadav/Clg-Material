#include<iostream>

using namespace std;

// scope resolution property 1 - when global variable and local variable with same name


int var = 10;
int main(){
    int var = 20;

    cout<<"var = "<<var<<endl;
    cout<<"::var = "<<::var<<endl;

    return 0;

}