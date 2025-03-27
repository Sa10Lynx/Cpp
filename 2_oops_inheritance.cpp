#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Human{
    private:
    int height;

    protected:
    int weight;

    public:
    int age;


};

class Male : private Human{

    public:
    string color;

    void setWeight(int w){
        this->weight=w;
    }
    void setAge(int a){
        this->age=a;
    }

    int getWeight(){
        return this->weight;
    }
    int getAge(){
        return this->age;
    }
    void sleep(){
        cout<<"He is sleeping."<<endl;
    }

};


class Animal{
    int age;
    int weight;

    public:

    void speaks(){
        cout<<"Speaking."<<endl;
    }
};

class Dog: public Animal{
    public:

    void iAm(){
        cout<<"I am a Dog."<<endl;
    }
};

class Cat: public Animal{
    public:
    void iAm(){
        cout<<"I am a Cat"<<endl;
    }
};

class Hybrid: public Cat, public Dog{
    public:

    void iAm(){
        cout<<"I am a Hybrid"<<endl;
    }
};

class GermanShepard: public Dog{
    public:
    void iAm(){
        cout<<"I am a German Shepard"<<endl;
    }
};


int main(){

    // Male m1;
    // m1.setAge(10);
    // m1.setWeight(50);
    // cout<<m1.getAge()<<endl;
    // cout<<m1.getWeight()<<endl;
    // m1.sleep();

    GermanShepard g1;
    g1.iAm();

    Hybrid h1;
    h1.iAm();

    h1.Cat::iAm();

    return 0;
}