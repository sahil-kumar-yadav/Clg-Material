#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    vector<int> nums{3, 1, -2, -5, 2, -4};
    int n = nums.size();
    cout << " n " << n << endl;
    vector<int> ans(n, 0);
    // ek positve ki aaray banate hai
    //  dusri negative ki
    //  last my dono ko merege kardege

    queue<int> positive;
    queue<int> negative;

    cout << "intitalization to sahi hua hai " << endl;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            // negative number hai
            negative.push(nums[i]);
        }
        else
        {
            // positive number hai
            positive.push(nums[i]);
        }
    }
    cout << "phele for loop paar kar gya " << endl;
    cout << "Priting posive numbers " << endl;

    // while(!positive.empty()){
    //     int temp = positive.front();
    //     cout<<temp<<" ";
    //     positive.pop();
    // }
    // cout<<endl;
    // cout<<"Negative print karte hai"<<endl;
    // while(!negative.empty()){
    //     int temp = negative.front();
    //     cout<<temp<<" ";
    //     negative.pop();
    // }

    // value to sahi hai dono my

    // merge karna hai
    int val = 0;
    for (int i = 1; i <= n; i++)
    {
        // phele positive sy lena hai baad my negative sya
        cout << "i = " << i << endl;
        if ((i & 1) && !positive.empty())
        {
            // odd values hai i ki that is postive number insert karna hai
            val = positive.front();
            positive.pop();
        }
        else
        {

            val = negative.front();
            negative.pop();
        }
        ans[i-1] = val;
    }
    cout << "second for loop paar kar gya " << endl;
    // [3,-2,1,-5,2,-4]
    // print karva lete hai
    cout << "priting the answer"<<endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}