#include<iostream>

using namespace std;

int main(){
    int *ptrarr[10];
    
    int a = 10;
    ptrarr[1] = &a;
    cout<<ptrarr[1]<<endl;
    cout<<*ptrarr[1]<<endl;
    cout<<&a;

    return 0;
}