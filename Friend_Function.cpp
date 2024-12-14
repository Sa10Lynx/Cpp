#include <iostream>
using namespace std;

class Box{
    private:
        int length;
    protected:
        int width;
    public:
        int height;

        Box(int l, int w, int h){
            length=l;
            width=w;
            height=h;
        }
        friend class Volume;
};

class Volume{
    public:

        void vol(Box& obj){
            cout<<obj.length*obj.width*obj.height<<endl;
        }
};


int main(){
    Box b1(10,20,30);
    Box b2(20,30,40);
    Volume vol1, vol2;
    vol1.vol(b1);
    vol2.vol(b2);
    
}