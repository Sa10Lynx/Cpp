#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkPalindrome(int i, int j ,string str){
    if(i>j)
        return 1;
    
    if(str[i]!= str[j])
        return 0;
    else    
        return checkPalindrome(i+1,j-1,str);
}


int main(){
    string str;
    cin>>str;

    if(checkPalindrome(0,str.size()-1,str))
        cout<<"YEs"<<endl;
    else    
        cout<<"No"<<endl;
    

    return 0;
}

