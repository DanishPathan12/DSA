#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> &arr,int k){
        sort(arr.begin(),arr.end());
        return arr[k-1];
}

int main(){
    vector<int> v={1,2,3,4,5,6,7,8};
    cout<<kthSmallest(v,3);
}




