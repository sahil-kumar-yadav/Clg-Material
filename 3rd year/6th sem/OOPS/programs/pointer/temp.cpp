#include <iostream>

using namespace std;
class Complex
{
    int real;
    int img;

public:
    void show()
    {
        cout << real << "+j" << img << endl;
    }
    Complex(int r,int i)
    {
        real = r;
        img = i;
    }
};
int main()
{
    complex c1();
    
    return 0;
}