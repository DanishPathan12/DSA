#include<iostream>
#include<vector>
using namespace std;

    int peakElement(vector<int> &arr) {
        int j=1;
        int i=0;
        while (j!=arr.size()){
            if(arr[j]>arr[i]){
                continue;
            }
            else{
                return true;
            }
            i++;
            j++;
        }
        
        return false;
        
    }

int main(){
        vector<int> v={1,2,3,4,5,6,1,2};
        cout<<peakElement(v);
}