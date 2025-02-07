#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n){
    if(n==0 || n==1)
        return n;
    int r1=fibonacci(n-1);
    int r2=fibonacci(n-2);

    return r1+r2;
}

int main(){
    int n;
    cin>>n;

    int ans=fibonacci(n);

    cout<<ans<<endl;

    return 0;
}