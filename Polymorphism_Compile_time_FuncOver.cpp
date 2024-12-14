#include <iostream>
using namespace std;

class Calculator{
    public:
        int add(int a, int b, int c){
            return a+b+c;
        }
        int add(int a, int b){
            return a+b;
        }
        double add(double a, double b){
            return a+b;
        }

};

int main(){
    Calculator calc;
    cout<<calc.add(1,2,3)<<endl;
    cout<<calc.add(1,2)<<endl;
    cout<<calc.add(1.2,3.0)<<endl; 
    
    return 0;
}