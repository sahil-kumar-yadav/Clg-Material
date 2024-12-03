#include<iostream>

using namespace std;

class item{
    public:
    int n;
    void set(int x){
        n = x;
    }

    void operator =(const item &obj){
        n = obj.n;
    }
};
int main(){
    item t1,t2;
    t1.set(10);
    


    item t3 = t1;
    cout<<"t3 After overloading"<<endl;
    cout<<"t3 ";
    cout<<t2.n<<endl;
    
    return 0;
}