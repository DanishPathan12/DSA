#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[6] = {1, 3, 5, 7, 9, 11};
    int arr2[7] = {
        2,
        4,
        6,
        8,
        10,
        12,
        14};
    vector<int> ans;
    int i = 0, j = 0;
    while (i < 9 && j < 9)
    {
        if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    for (int value : ans)
    {
        cout << value << " ";
    }
}