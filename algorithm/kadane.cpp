#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[10]={-4,7,-8,5,9,7,-6,7,7,-8};
    int sum=0;
    int maxi=INT_MIN;
    int low=-1,high=-1,start;

    for(int i=0;i<10;i++){
        if(sum==0){start=i;}
        sum+=arr[i];
        if (sum>maxi)
        {
            maxi=sum;
            low=start,
            high=i;
        }
        
        if(sum<0){
            sum=0;
        }
    }
     cout<<maxi<<endl;
     cout<<low<<" "<<high;
}