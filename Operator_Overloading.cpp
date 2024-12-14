#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int r, int i){
            real=r;
            imag=i;
        }
        void print(){
            cout<<real<<" + i"<<imag<<endl;
        }
        friend Complex operator+(Complex const& obj1, Complex const& obj2);
};

Complex operator+(Complex const& obj1, Complex const& obj2){
    return Complex(obj1.real+obj2.real, obj1.imag+obj2.imag);
}

int main(){
    Complex c1(10,10),c2(5,6);
    Complex c3=c1+c2;
    c3.print();
    return 0;
}