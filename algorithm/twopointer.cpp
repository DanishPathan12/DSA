#include<iostream>
#include<String>
using namespace std;


        bool isVowel(char &s){
            if(s=='a'||s=='i'|| s=='o'||s=='u'||s=='e'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U' ){
                return true;
            }
            return false;
        }
    
        string reverseVowels(string s) {
                int i=0,j=s.length()-1;
                while(i<j){
                  if(!isVowel(s[i])){
                    i++;
                  }else if(!isVowel(s[j])){
                    j--;
                  }else{
                    swap(s[i],s[j]);
                    i++;
                    j--;
                  }
                }
                return s;
        }
    

int main(){

}