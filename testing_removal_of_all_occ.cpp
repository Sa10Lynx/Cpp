#include <iostream>
#include <string>
#include <stack>
#include <bits/stdc++.h> 
using namespace std;

string removeOccurrences(string s, string part) {
        stack<char> st;
        int n=part.length();

        for(char c:s){
            st.push(c);
            if(st.size()>=n){
                string temp;
                for(int i=0;i<n;i++){//storing elements in a temp string
                    temp+=st.top();
                    st.pop();
                }
                reverse(temp.begin(), temp.end());
                if(temp!=part){//comparing the temp and part
                    for(char c:temp){//if not same return back the same string
                        st.push(c);
                    }
                }
            }
        }

        string result;
        while(!st.empty()){//storing answer in string
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());//reversing since stack

        return result;
    }

int main(){

    string s,part;

    cin>>s;
    cin>>part;
    cout<<"Given string: "<<s<<" Given part: "<<part<<endl;
    string result=removeOccurrences(s,part);
    cout<<"After removal of occurences: "<<result<<endl;

}