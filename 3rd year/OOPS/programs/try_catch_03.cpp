#include <iostream>

using namespace std;
int main()
{
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;
    cout << "Enter array index: ";
    cin >> index;
    try
    {
        if (index >= 4) // throw exception if array out of bounds
        {
            string str = "Error: Array out of bounds!";
            // throw "Error: Array out of bounds!";
            throw str;
        }
        if (index < 0) // throw exception if array out of bounds
        {
            throw true;
        }
        cout << "Enter numerator: "; // not executed if array is out of bounds
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
        if (denominator == 0) // throw exception if denominator is 0
            throw 0;
        arr[index] = numerator / denominator; // not executed if denominator is 0
        cout << arr[index] << endl;
    }
    catch (string msg)   // const char *msg
    { // catch "Array out of bounds" exception
        cout << msg << endl;
    }
    catch (int num)
    { // catch "Divide by 0" exception
        cout << "Error: Cannot divide by " << num << endl;
    }
    catch (...)
    { // catch any other exception
        // cout<<...<<endl; // invalid expression
        cout << "Unexpected exception!" << endl;
    }

    return 0;
}