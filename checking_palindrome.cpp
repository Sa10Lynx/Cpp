#include <bits/stdc++.h>
using namespace std;

string removingSplChars(string s) {
    string result;
    for(char c : s) {
        if(isalnum(c)) 
            result += c;
    }
    return result;
}

string toLowerCase(string s) {
    for(char& c : s) { 
        c = tolower(c);
    }
    return s;
}

bool checkPalindrome(string s) {
    s = removingSplChars(s);
    s = toLowerCase(s);
    int st = 0;
    int e = s.size() - 1;
    while(st < e) {
        if(s[st++] != s[e--]) { 
            return false;
        }
    }
    return true;
}


int main(){
    string s;
    cout<<"provide any string (even with special chareccters)"<<endl;
    //code removes the special charecters and only checks with alpha numeric values;
    cin>>s;
    if(checkPalindrome(s))
        cout<<s<<" is a palindrome."<<endl;
    else   
        cout<<"Given string is not a palindrome."<<endl;

}