#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(string& str, int index, vector<string>& ans){
    if(index>=str.length()){
        ans.push_back(str);
        return ;
    }

    for(int i=index; i<str.length();i++){
        swap(str[i],str[index]);
        solve(str,index+1,ans);
        swap(str[i],str[index]);
    }


}

vector<string> generatePermutations(string& str){
    vector<string> ans;
    int index=0;
    solve(str,index,ans);

    return ans;
}

int main(){

    string str="abc";

    vector<string> ans=generatePermutations(str);

    for (const string& s : ans) {
        cout << s << " ";
    }


    return 0;
}