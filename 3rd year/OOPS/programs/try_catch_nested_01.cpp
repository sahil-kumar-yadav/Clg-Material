#include <iostream>

using namespace std;

int main()
{
    try
    {
        try
        {
            cout << "Throwing exception from inner try block" << endl;

            int n = 14;
            if (n < 10)
            {
                throw 22;
            }
            else
            {
                throw 'c';
            }
        }
        catch (int n)
        {
            cout << "Inner Catch Block caught the exception " << n << endl;
        }
    }
    catch (char c)
    {
        cout << "Outer catch block caught the exception  " << c << endl;
    }
    cout << "Out of the block";

    return 0;
}