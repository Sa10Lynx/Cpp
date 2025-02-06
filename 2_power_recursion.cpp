#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int powerOfTwo(int n){
    if(n==0)
        return 1;

    return 2*powerOfTwo(n-1);
}

int main(){
    cout<<"Enter the power of 2: ";
    int n;
    cin>>n;
    cout<<powerOfTwo(n)<<endl;
}