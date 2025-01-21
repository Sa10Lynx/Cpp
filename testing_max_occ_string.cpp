#include <iostream>
#include <string>

using namespace std;

char maxOccur(string s){
    int arr[26]={0};//empty array of 26 elemnets to represent each letter of the alphabet
    //incrementing the value of each letter in the string based on occurrence

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }//arr[] now has values of each alphabet occurence

    //to find the maximum from the arr[]
    int maxi=-1;
    int ans=0;

    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalAns= ans+'a';
    return finalAns;

}


int main(){

    string s;
    cin>>s;
    cout<<"Max Occuring char is: "<<maxOccur(s)<<endl;

}