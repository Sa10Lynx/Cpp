#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void draw(){
            cout<<"Draws a shape"<<endl;
        }
};

class Circle: public Shape{
    public:
        void draw() override{
            cout<<"Draws a circle"<<endl;
        }
};

class Rectangle: public Shape{
    public:
        void draw() override{
            cout<<"Draws a rectangle"<<endl;
        }
};

int main(){
    Shape *shape1, *shape2;
    Circle circle;
    Rectangle rectangle;
    shape1=&circle;
    shape2=&rectangle;

    shape1->draw();
    shape2->draw();
    return 0;
}