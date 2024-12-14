#include <iostream>
using namespace std;

struct studentData{
    int age;
    int roll;
    string name;
};

void printDataP(struct studentData* std){
    cout<<"Age: "<<std->age<<endl;
    cout<<"Name: "<<std->name<<endl;
    cout<<"Roll: "<<std->roll<<endl;
    std->age = 100;
}

void printData(struct studentData std){
    cout<<"Age: "<<std.age<<endl;
    cout<<"Name: "<<std.name<<endl;
    cout<<"Roll: "<<std.roll<<endl;
    std.age = 100;
}

int main(){
    struct studentData s1,s2;
    s1.age=10;
    s1.roll=110;
    s1.name="Tanush";

    s2.age=12;
    s2.roll=112;
    s2.name="XYZ";

    printData(s1);
    cout<<endl;
    printData(s1);
    return 0;
}
