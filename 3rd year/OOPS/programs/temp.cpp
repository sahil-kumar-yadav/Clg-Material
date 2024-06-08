#include<iostream>

using namespace std;

void swap(int *x,int *y);

int main(){
    int i = 10,j=20;
    cout<<i<<j<<endl;
    swap(i,j);
    cout<<i<<j<<endl;

    return 0;

}