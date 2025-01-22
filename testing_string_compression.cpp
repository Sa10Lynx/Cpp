#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int compress(vector<char>& chars) {
    // vector<int> count(26,0);
    // for(int i=0;i<chars.size();i++){
    //     char ch=chars[i];
    //     count[ch-'a']++;
    // }
    // for(int i=0;i<26;i++){
    //     if(count[i]!=0){
    //         cout<<count[i]<<endl;
    //     }
    // }

    int i=0;//iterator to traverse the array
    int ansIndex=0;//to keep a not on how many charecters are repeating
    int n=chars.size();

    while(i<n){//iterate the vectorinput
        int j=i+1;  //to chekc whether the nect elemt
        while(j<n && chars[i]==chars[j]){
            j++;//increment this to find out how many of the same charecter is repeating
        }//will come out of the loop only when if whole vector is traversed or a new elemnet is is found

        chars[ansIndex]=chars[i];
        ansIndex++;//store the old charecter

        int count=j-i;//no. of chars the current charecter are there in the vector

        if(count>1){
            string cnt = to_string(count);
            for(char ch:cnt){
                chars[ansIndex++]=ch;
            }
        }
        i=j;
        //once all the same chars have been iterated update the pointer so it willl point to the new charecter
    }
    return ansIndex;
}

int main(){
    char s[10]={'a','a','a','b','b','b','c','d','e','e'};
    vector<char> st(s,s+sizeof(s)/sizeof(char));
    cout<<compress(st)<<endl;
    return 0;
}

//answer for the given example will be 8 coz after updating the array we will be getting
//[a,3,b,3,c,d,e,2]====>8 charecters which is what the question wants to be returned
