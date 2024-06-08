#include<iostream>

using namespace std;

class NUM{
    private:
    int n;
    public:
    void setn(int x){
        n = x;
    }
    void printn(){
        cout<<"value of n is "<<n<<endl;
    }

    void operator -(void){
        n = -n;
    }
};

int main(){
    NUM num1;
    num1.setn(10);
    -num1;
    num1.printn();


    return 0;
}