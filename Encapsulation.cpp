#include <iostream>
using namespace std;

class BankAccount{
    private:
        int accountNumber;
        int balance;
    public:
        void setDetails(int acc, int bal){
            accountNumber=acc;
            balance=bal;
        }
        void display(){
            cout<<"Your Account number is: "<<accountNumber<<endl<<"Your Balance is: "<<balance<<endl;
        }
};

int main(){
    BankAccount p1,p2;
    p1.setDetails(110,10000);
    p2.setDetails(112,11100);
    p1.display();
    cout<<endl;
    p2.display();
    return 0;
}