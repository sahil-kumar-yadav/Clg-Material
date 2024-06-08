#include<iostream>

using namespace std;

void date(int day,int month,int year=2024){
    cout<<"date is "<<day<<"/"<<month<<"/"<<year<<endl;
}

int main(){
    
    date(12,12);
    date(12,10,2001);

    return 0;

}