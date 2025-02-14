#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;
//using 2 pointers
string Rev1(int i, int j, string str){
    if(i>j)
        return str;

    swap(str[i++],str[j--]);
    return Rev1(i,j,str);
}
//using single pointer
string Rev2(int i, string str){
    int check=str.size()-i-1;
    if(i>check)
        return str;
    swap(str[i++],str[check--]);
    return Rev2(i,str);
}

int main(){
    string s;
    cin>>s;

    string palindrome=Rev2(0,s);



    if(s==palindrome)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}