#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int getPower(int num, int powr){
    //base cases
    if(powr==0)
        return 1;
    if(powr==1)
        return num;

    int ans=pow(num,powr/2);

    if(powr%2==0)
        return ans*ans;
    else    
        return num*ans*ans;

}

int main(){
    int a,b;
    cin>>a>>b;
    int ans=getPower(a,b);
    cout<<"Power is: "<<ans<<endl;

    return 0;
}