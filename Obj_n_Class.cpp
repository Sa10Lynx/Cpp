#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

int main(){
    Person person1, person2;
    person1.age=20;
    person1.name="Tanush";
    person2.age=25;
    person2.name="Tanush G";

    cout<<"Person 1 Details: "<<endl<<"Name: "<<person1.name<<endl<<"Age: "<<person1.age<<endl;
    cout<<"Person 2 Details: "<<endl<<"Name: "<<person2.name<<endl<<"Age: "<<person2.age<<endl;
    return 0;
} 
