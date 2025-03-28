#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int majorityElement(vector<int>& arr) {
        int n=arr.size();
        if(n<3){
            return-1;
        }
        sort(arr.begin(),arr.end());
        return arr[n/2];
    }

int main(){
    vector<int> v={1,2,3,2,3,3,43,4,3,3,3,221,2,1,2,21,2,2,2,2};
    cout<<majorityElement(v);
    map<int,int> freq;
    for(auto i:v){
        freq[i]++;
    }
    map<int,int> :: iterator it;
    int max=0;
    int ans=0;
    for(it=freq.begin();it!=freq.end();++it){
        cout<<it->first<<" value "<<it->second<<endl;
        if(max<it->second){
            max=it->second;
            ans=it->first; 
        }
    }
     cout<<"max is"<<max <<" ans is "<<ans;

 }