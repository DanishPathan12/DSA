#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &arr)
{
    int n = arr.size() + 1;
    int sumofN;
    sumofN = (n * (arr.front() + arr.back())) / 2;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    cout << "sum" << sum << endl;
    cout << "sumof N " << sumofN << endl;
    return sumofN - sum;
}

int main()
{
    vector<int> v = {1, 2, 3, 5};
    vector<int> ref;
    int n = v.size() ;
    int ans;
    for (int i = 1; i < n; i++)
    {
        ref.push_back(i);
    }


    for(int i=0;i<n;i++){
        ans=v[i]^ref[i];
        if(ans!=0){
            cout<<ans;
        }
    }

}