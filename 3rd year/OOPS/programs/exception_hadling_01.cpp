#include<iostream>

// there are 2 types of error 
// 1. logical error --> can't be identified by compiler
// 2.  semantic errror or syntax error --> can be identified by complier

// 3rd special type of error --> run time error 
// to avoid run time error we do exception handling

using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b ";
    cin>>b;
    c = a/b;
    cout<<"Division a/b = "<<c<<endl;

    return 0;

}