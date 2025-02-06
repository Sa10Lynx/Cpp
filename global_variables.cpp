#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int global=10;

void a(int a){
    cout<<"in the function a: "<<global<<endl;
    global++;
}

void b(int b){
    cout<<"in the function b: "<<global<<endl;
    global++;
}

void c(int& c){
    cout<<"in the function c: "<<c<<endl;
    c++;
}

int main(){
    a(global);
    b(global);
    cout<<"in main(): "<<global<<endl;

    int ref=10;
    c(ref);
    cout<<"int main() ref: "<<ref<<endl;

    return 0;
}

//it is bad practice of using global variables instead preferred is reference variables