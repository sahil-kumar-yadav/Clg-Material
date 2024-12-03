#include <iostream>

// how to perform exception handling
// 1. hit the excption /find
// 2. throw the exception
// 3. catch the exception
// 4. perform the correction action

// try block
// this block contains the code which may contain
// the exception
// if we don't know which code contain excption
// place the complete code in int main to try catch block

// whenever exception is found the try block immediately
// throw it to catch block

// if no exception catch block doesn't activate

// catch block must be written just after try block
// multiple catch block can be written for a try block depending on type of error

using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a ";
    cin >> a;
    cout << "enter b ";
    cin >> b;
    try
    {
        if (b == 0) // throw an exception if denominator is 0
            throw 0;

        c = a / b; // not executed if denominator is 0
        cout << a << " / " << b << " = " << c << endl;
    }
    catch (int num_exception)
    {
        cout << "Error: Cannot divide by " << num_exception << endl;
    }


    return 0;
}