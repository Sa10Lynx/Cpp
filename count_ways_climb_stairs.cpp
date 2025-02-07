#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int waysToCount(int n){
    if(n<0)
        return 0;
    if(n==0)
        return 1;

    int ans= waysToCount(n-1)+waysToCount(n-2);
    return ans;

}

int main(){
    int n;
    cin>>n;

    cout<<waysToCount(n)<<endl;

    return 0;
}