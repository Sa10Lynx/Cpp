#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <string>

using namespace std;

string removalDuplicates(string s){
    stack<char> st;
    //travel thru the whole string and when a duplicate is found pop it;
    for(char c:s){
        if(!st.empty() && st.top()==c){
            st.pop();//removal of duplicates
        }
        else{
            st.push(c);//push the diff variable
        }
    }

    string ans;//store the ans in a string
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    //reversing the string since stack follows LIFO
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s;
    cin>>s;
    string rem=removalDuplicates(s);
    cout<<"After removal of duplicates: "<<rem<<endl;


    return 0;
}