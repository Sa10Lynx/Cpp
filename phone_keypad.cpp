#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(string digits,vector<string>& ans, string output, int index, string map[]){
    if(index>=digits.length()){
        ans.push_back(output);
        return ;
    }

    int number = digits[index]-'0';

    string value = map[number];
    
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits,ans,output,index+1,map);

        output.pop_back();
    }

}

vector<string> letter(string digits){
    vector<string> ans;
    if(digits.empty())
        return ans;


    string output;
    int index=0;

    string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


    solve(digits,ans,output,index, map);

    return ans;

}

int main(){

    string digits="34";
    vector<string> ans=letter(digits);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}