#include<iostream>
using namespace std;

class stack{

    public :
    int size;
    int top;
    int* arr;
    
    stack(int s){
        size =s;
        arr=new int[size];
        top=-1;
        
    }

    void push(int value){
        if (top>=size-1)
        {
            cout<<"stack is overflown";
        }
        arr[++top]=value;
        
    }

    int  pop(){
        if(top==-1){
            cout<<"Stack is empty";
            return-1;
        }
        return arr[top--];
        
    }

    int peak(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }
    
    bool isEmpty(){
        return top==-1;
    }
    
};


int main(){
    stack st(5);
    st.push(45);
    st.push(102);
    st.push(1021);
    st.push(102);
    st.push(10);
    while (!st.isEmpty()) {
        cout << st.pop() << " ";
    }


    return 0;
}