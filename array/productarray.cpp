#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int sum = 1;
    for (int i : nums)
    {
        sum *= i;
    }
    cout << sum;
    vector<int> ans;
    for (int i : nums)
    {
        if (i == 0)
        {
            ans.push_back(sum);
        }
        else
        {
            int temp = sum / i;
            ans.push_back(temp);
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(v);
    for (int i : ans)
    {
        cout << i << " ";
    }
}