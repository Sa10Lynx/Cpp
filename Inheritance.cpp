#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound(){
            cout<<"The animal makes the sound: "<<endl;
        };
};

class Dog: public Animal{
    public:
        void sound() override{
            cout<<"bark";
        }
};

int main(){
    Dog dog;
    dog.sound();
    return 0;
}
