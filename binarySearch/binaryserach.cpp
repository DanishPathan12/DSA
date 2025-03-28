#include<bits/stdc++.h>
using namespace std;

int binarySerach(vector<int> &arr,int key){
    int low=0;
    int high=arr.size();
    while (low<=high)
    {
    
    int mid=(low+high)/2;

    if (arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
       
       low=mid+1;

    }else{
        high=mid-1;
    }

    }
}

int main()
{
    vector<int> v={1,2,3,4,5};
    cout<<binarySerach(v,5);
}