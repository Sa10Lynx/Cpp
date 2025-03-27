#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

//encapsultaion is wrapping up members and functions into a single class
//a fully encapsulatesd class has all its members as private
//advantages:
//data hiding
//can make class read only
//code reusability
//used fo runit testing

class Student{
    private:
        string name;
        int age;
        int height;

    public:

        int getAge(){
            return this->age;
        }

};



int main(){
    
    Student std1;

    return 0;
}