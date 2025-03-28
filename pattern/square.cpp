#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
          if(j!=0 && j!=4)
           {continue; 
            cout<<" "; }
        cout<<j<<" ";
        }    
        cout<<endl;
    }
}