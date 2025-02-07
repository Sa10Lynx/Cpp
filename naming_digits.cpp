#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

void naming(int n){
    string ans[n];
    if(n==0)
        return ;
    
    string names[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int num=n%10;
    n=n/10;
    naming(n);

    cout<<names[num]<<' ';

}

int main(){
    int n;
    cin>>n;
    naming(n);

    return 0;
}