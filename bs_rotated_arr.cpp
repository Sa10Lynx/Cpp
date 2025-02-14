#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

//[7,8,9,1,2,3]===> pivot is 1;
int binarySearch(int *arr, int s, int e, int k){
    if(s>e)
        return -1;

    int mid=s+(e-s)/2;
    if(arr[mid]==k)
        return mid;

    if(arr[mid]>k)
        return binarySearch(arr,s,mid-1,k);
    else
        return binarySearch(arr,mid+1,e,k);

}

int pivot(int *arr, int s, int e){
    if(s>=e)
        return s;

    int mid=s+(e-s)/2;

    if(mid<e && arr[mid]>arr[mid+1])//if mid is pivot
        return mid+1;
    else if(mid>s && arr[mid]<arr[mid-1])//if mid-1 is pivot
        return mid;

    if(arr[s]<=arr[mid])//search in right half
        return pivot(arr,mid+1,e);

    return pivot(arr,s,mid-1);//search in left half
}

int Search(int *arr, int pivot, int k, int s, int e){
    if(arr[pivot]==k)//if key is at pivot
        return pivot;
    int ans=-1;
    if(k>+arr[s] && k<=arr[pivot-1]){//if key in left side of the sorted
        ans=binarySearch(arr, s, pivot-1, k);
    }
    else//if key at right side
        ans=binarySearch(arr,pivot+1,e,k);

    return ans;
}

int main(){

    int arr[5]={7,8,1,2,3};
    int n=5;

    int pivotIndex=pivot(arr,0,n-1);
    cout<<"Pivot at: "<<pivotIndex<<endl<<"the element is: "<<arr[pivotIndex]<<endl;


    int k=2;
    int srch=Search(arr,pivotIndex,k,0,5);

    cout<<srch<<endl;
}