#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A{

    public:

    void sayHello(){
        cout<<"Hello all"<<endl;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

class B{

    public:
    int a;
    int b;

    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;

        cout<<"Output: "<<value1 - value2<< endl;
    }

    void operator() (){
        cout<<"I am a braket "<<endl;
    }
};

int main(){

    A a1;
    a1.sayHello();
    a1.sayHello("Tanush");

    B b1,b2;
    b1.a=4;
    b2.a=9;

    b2+b1;

    b1();
    return 0;
}