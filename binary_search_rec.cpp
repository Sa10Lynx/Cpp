#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
    if(s>e)
        return 0;

    int mid=s+(e-s)/2;
    if(arr[mid]==k)
        return 1;

    if(mid>k)
        return binarySearch(arr,s,mid-1,k);
    else
        return binarySearch(arr,mid+1,e,k);

}

int main(){
    int arr[5]={1,2,3,4,5};
    int key=0;

    if(binarySearch(arr,0,4,key))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}