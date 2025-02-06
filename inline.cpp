#include <iostream>
#include <bits/stdc++.h>

using namespace std;

inline int comp(int a, int b){
    return (a>b)?a:b;
}

int main(){

    int a,b;
    cin>>a>>b;
    
    cout<<comp(a,b)<<endl;

    return 0;
}

//inline func accepts when the func body is around 1 to max 3 lines
//this works as macro it replaces the body at the main
//no extra memory usage