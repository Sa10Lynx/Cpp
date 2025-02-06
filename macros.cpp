#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define PI 3.14
//instead of writing 3.14 everytime now can simply use the macro
//it can not be modified at all

int main(){
    float radius;
    cin>>radius;
    cout<<"Area is: "<<PI*radius*radius<<endl;

    return 0;
}
//it also saves up the space of not declaring a variable(even tho that is negligible)
//ensures that the value is not modified

//can not perform something like PI=PI+2