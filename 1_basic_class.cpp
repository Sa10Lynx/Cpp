#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Hero{
    //properties
    private:
        int health=100;
    public:
        char *name;
        char level=10;

        Hero(){
            cout<<"Simple Constructor called."<<endl;
            name= new char[100];
        }

        //parameterized constructr
        Hero(int health){
            cout<<"this : "<<this<<endl;
            this->health=health;
            //this is a pointer to the current object
            //when thisss paarmeterized constructor is called "this" stores the address of object invoking it
        }

        Hero(int health, char level){
            this->health=health;
            this->level=level;
        }


        //creating a custom copy constructor
        //if it is not called by pass by ref and insteead called by value
        //then it will end up in a infinite loop
        Hero(Hero& temp){

            char *ch= new char[strlen(temp.name)+1];
            strcpy(ch,temp.name);
            this->name=ch;

            cout<<"Copy constructor called: "<<endl;
            this->health=temp.health;
            this->level=temp.level;
        }

        void printHealth(){
            cout<<"Health: "<<health<<endl;
        }

        void printLevel(){
            cout<<"Level: "<<level<<endl;
        }

        void print(){
            cout<<"Name: "<<this->name<<endl;
            cout<<"Health: "<<this->health<<endl;
            cout<<"Level: "<<this->level<<endl;
            cout<<endl;

        }

        //getter function
        //just for basic getting the data
        int getHealth(){
            return health;
        }

        char getLevel(){
            return level;
        }

        //setter functions
        //can have multiple paarmeters
        void setHealth(int h){
            health=h;
        }

        void setLevel(char l){
            level=l;
        }

        void setName(char name[]){
            strcpy(this->name,name);
        }
};

int main(){



    Hero org;
    org.setHealth(100);
    org.setLevel('S');
    org.setName("Tanush");

    Hero copy(org);



    //modify some vals

    org.name[0]='H';
    cout<<"ORG:"<<endl;
    org.print();
    cout<<"COPY:"<<endl;
    copy.print();

    org = copy;
    //basically does:
    //org.health=copy.health .....

    cout<<"after copy assignmet:"<<endl;
    cout<<"ORG:"<<endl;
    org.print();
    cout<<"COPY:"<<endl;
    copy.print();


    // Hero h1;
    // h1.setHealth(10);
    // h1.setLevel('A');
    // char name[7]="Tanush";
    // h1.setName(name);
    // h1.print();

    // //using default copy constructor
    // //maek sure to comment the prev default cc
    // Hero h2(h1);
    // h2.print();

    // //changing h1s name 
    // h1.name[0]='H';
    // h1.print();

    // //basically does a shallow copy
    // //the copy is accessing the same memory
    // //as soon as memory is changed in the orginal the copy , copies from that same memory 
    // //which is changed ()
    // h2.print();

    //in the case of deep copy uncomment the cc and run
    //now an entorely new array is creat4d and teh copy is pointed towards it an dnot the original array



    // Hero h1(10,'S');
    // h1.printHealth();
    // h1.printLevel();


    // //copy of the values of h1 is stored in h2
    // //basically a copy constructor
    // Hero h2(h1);
    // h2.printHealth();
    // h2.printLevel();





    // Hero h1(10);
    // cout<<"Adress of h1: "<<&h1<<endl;
    // h1.getHealth();
    // //calling stattically
    // Hero h1;

    // //callling dynamically
    // Hero *h2 = new Hero;
    //when a non paramenterized constructr created there is no more of default cons


    // //static allocation
    // Hero h1;

    // h1.setHealth(80);
    // h1.setLevel('A');

    // cout<<"Level is : "<<h1.level<<endl;
    // cout<<"Health is : "<<h1.getHealth()<<endl;

    // //dynamic allocation
    // Hero *h2= new Hero;
    // h2->setHealth(90);
    // h2->setLevel('S');

    // cout<<"Level is : "<<(*h2).level<<endl;
    // cout<<"Health is : "<<(*h2).getHealth()<<endl;

    // //or
    // cout<<"Level is : "<<h2->level<<endl;
    // cout<<"Health is : "<<h2->getHealth()<<endl;


    //use '.' to access class members

    // h1.setHealth(70);
    // h1.level='A';

    // h1.printHealth();
    // h1.printLevel();
    

    // cout<<"size of hero object is: "<<sizeof(h1)<<endl;//if empty class then ssize is 1 

    return 0;
}