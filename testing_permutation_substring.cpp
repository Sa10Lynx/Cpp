#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool checkInclusion(string s1, string s2) {
    //if s1 is longer not possible
    if(s1.length()>s2.length())
        return false;

    //based on sliding window protocol solving
    vector<int> s1freq(26,0);//freq of the permutation charecters
    vector<int> windowfreq(26,0);//freq of chars the window in the current s2

    //calculating for the 1st window 
    for(int i=0;i<s1.length();i++){
        char ch1=s1[i];
        char ch2=s2[i];
        //adding the variable freq in each vector accordingle
        s1freq[ch1-'a']++;
        windowfreq[ch2-'a']++;//1st window freq for s2
    }
        if(s1freq==windowfreq)//if initial equal the return true
            return true;

        //continue sliding window for the next consecutive windows in s2
        for(int i=s1.length();i<s2.length();i++){
            //add new char to the window and remove the prev char
            char newChar=s2[i];
            windowfreq[newChar-'a']++;

            //removing the old char
            char oldChar=s2[i-s1.length()];
            windowfreq[oldChar-'a']--;

            //check if current window and s1 freq matches
            if(s1freq==windowfreq)
                return true;
        }
    
    //if no match found after full iteration then return false;
    return false;
}

int main(){

    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(checkInclusion(s1,s2))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
