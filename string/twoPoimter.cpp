#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;


int main()
{
    string str="572427855491";
    int max=0;
    for(int i=0;i<str.length();i++){
        if (str[i]%2!=0 )
        {
           if(max<str[i]-'0'){
            max=str[i]-'0';
           }
        }
        
    }
    cout<<max;
    return 0;
}