#include <iostream>
using namespace std;

class Vehicle{
    public:
        virtual void startEngine()=0;
};

class Car: public Vehicle{
    public:
        void startEngine() override{
            cout<<"Starts the Car"<<endl;
        }
};

class Bike: public Vehicle{
    public:
        void startEngine() override{
            cout<<"Starts the bike"<<endl;
        }
};

int main(){
    Car car;
    car.startEngine();
    Bike bike;
    bike.startEngine();

    return 0;
}