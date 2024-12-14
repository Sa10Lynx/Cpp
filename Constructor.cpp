#include <iostream>
using namespace std;

class Rectangle{
    public:
    int x,y;
        Rectangle(int breadth, int height){
            cout<<"Area of the given rectangle is :"<<breadth*height<<endl;
        }
};

int main(){
    Rectangle rectangle1(1,2) , rectangle2(3,4);
    return 0;
}
