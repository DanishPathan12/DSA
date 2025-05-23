#include <iostream>
#include <vector>
using namespace std;

int isArraySorted(vector<int> arr, int n)
{
    if (n == 1)
        return 1;

    return arr[n - 1] < arr[n - 2] ? 0 : isArraySorted(arr, n - 1);
}

int main()
{
    vector<int> v = {1, 2, 32, 54, 66, 69, 71};
    cout << isArraySorted(v, 7);
}