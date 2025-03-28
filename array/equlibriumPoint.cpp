#include<iostream>
#include<vector>
#include<random>
using namespace std;

int main(){
    vector<int> arr={1, 1,1,1,1};
    int i=0,j=arr.size()-1;
    int leftSum=0,rightSum=0;
    while (leftSum!=rightSum)
    {
        leftSum+=arr[i];
        rightSum+=arr[j];
     
        
        i++;
        j--;

        
    }
    
    if (leftSum==rightSum)
        {
            cout<<"true";
        }else{
            cout<<"not true";
        }

    
}