#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(int *arr, int size){
    if(size==0)
        return 0;

    int ans=arr[0]+sum(arr+1,size-1);

    return ans;
}

int main(){
    int arr[5]={1,2,2,1,3};
    cout<<sum(arr,5);
}