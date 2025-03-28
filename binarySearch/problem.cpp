#include<iostream>
#include<vector>
using namespace std;

int binarySerachfirstoccurence(vector<int> &arr,int key){
    int low=0;
    int high=arr.size()-1;
    int mid=(low+high)/2;
    int ans=-1;
    while (low<=high)
    {
    if (arr[mid]==key)
    {
        ans=mid;
        high=mid-1;
    }
    else if(arr[mid]<key)
    {
       
       low=mid+1;

    }else{
        high=mid-1;
    }
    mid=(low+high)/2;
    }
    return ans;
}

int binarySerachLastoccurence(vector<int> &arr,int key){
    int low=0;
    int high=arr.size()-1;
    int mid=(low+high)/2;
    int ans=-1;
    while (low<=high)
    {
    if (arr[mid]==key)
    {
        ans=mid;
        low=mid+1;
    }
    else if(arr[mid]<key)
    {
       
       low=mid+1;

    }else{
        high=mid-1;
    }
    mid=(low+high)/2;
    }
    return ans;
}
int main(){
    vector<int> v={0,0,1,1,1,2,2,2,4,5};
     cout<<binarySerachfirstoccurence(v,2)<<" ";
    cout<<binarySerachLastoccurence(v,2);    
}