#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isSorted(int *arr, int size){
    if(size==0 || size==1)
        return 1;
    
    if(arr[0]>arr[1])
        return 0;
    else
        bool ans=isSorted(arr+1, size-1);
}

int main(){
    int *arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    if(isSorted(arr, n))
        cout<<"Yes"<<endl;
    else    
        cout<<"No"<<endl;

    return 0;
}