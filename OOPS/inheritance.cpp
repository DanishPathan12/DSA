#include<bits/stdc++.h>
using namespace std;

class Animal{
    string name;
    int age;
    public:
    Animal(string name,int age){
        this->name=name;
        this->age=age;
        cout<<"Contructor is called "<<name<<" age "<<age<<endl;
    }

};

class Dog:public Animal{
    public:
    Dog(){
        cout<<"Dog constructor is called"<<endl;
    }
    void bark(){
        cout<<"dog barks"<<endl;
    }
};

int main(){
    Animal Dog("dog",15);
    Dog* d1=new Dog();
    d1.bark();

}