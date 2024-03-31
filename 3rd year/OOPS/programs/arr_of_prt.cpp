#include<iostream>

using namespace std;

int main(){
    int *ptr[4];
    int a = 0;
    ptr[0] = &a;
    ptr[1] = &a;
    ptr[2] = &a;
    int *ptr1 = new int[10];
    ptr1[0] = 1;
    ptr1[1] = 1;
    ptr1[2] = 1;
    return 0;
}