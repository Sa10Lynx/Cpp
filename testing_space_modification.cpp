#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <string>

using namespace std;


string replaceSpaces(string &str){
	vector<char> ans;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			ans.push_back('@');
			ans.push_back('4');
			ans.push_back('0');
		}
		else{
            ans.push_back(str[i]);
        }
	}

	string finalAns(ans.begin(),ans.end());
	return finalAns;
}

int main(){
    string s;
    getline(cin,s);
    string result=replaceSpaces(s);
    cout<<result<<endl;

    return 0;
}