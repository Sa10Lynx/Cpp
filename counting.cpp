#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
vector<int> ans;
vector<int> counting(int n){
    if(n<0){

        return ans;
    }

    counting(n-1);
    ans.push_back(n);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> noice=counting(n);
    for(int i=0;i<noice.size();i++){
        cout<<noice[i]<<" ";
    }

    return 0;
}