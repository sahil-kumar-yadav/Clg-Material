#include<iostream>

using namespace std;

int main(){
    int a = 10;


    // int* ptr = 0xac853ff974; // yeh nahi chllega error dega 
    
     int *ptr=&a;
    cout<<ptr<<endl;



    // cout<<ptr<<endl;
    cout<<&a;
    return 0;
}