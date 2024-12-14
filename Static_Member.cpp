#include <iostream>
using namespace std;

class Counter{
    public:
        static int count;
        Counter(){
            count++;
        }
};

int Counter::count=0;

int main(){
    Counter c1;
    cout<<c1.count<<endl;

    Counter c2;
    cout<<c2.count<<endl;

    return 0;
}
