#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    for (int i = 0; i < 12; i++)
    {
        v.push_back(i*7);
    }
    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<"v-->"<<v.at(v.size()-2);
}