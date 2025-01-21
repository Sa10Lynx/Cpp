#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int compress(vector<char>& chars) {
    vector<int> count(26,0);
    for(int i=0;i<chars.size();i++){
        char ch=chars[i];
        count[ch-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            cout<<count[i]<<endl;
        }
    }
}

int main(){
    char s[10]={'a','a','a','b','b','b','c','d','e','e'};
    vector<char> st(s,s+sizeof(s)/sizeof(char));
    compress(st);
    return 0;
}