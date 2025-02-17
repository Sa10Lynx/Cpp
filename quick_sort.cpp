#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int partition(int *arr, int s, int e){
    //making the 1st element as pivot
    int pivot=arr[s];

    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
            count++;
    }

    //to place the pivor to its place

    int pivotIndex= s+count;
    swap(arr[s],arr[pivotIndex]);


    //to place the elements which are less than ivot on the left and vice versa on right

    int i=s;
    int j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}


void quickSort(int *arr, int s, int e){
    //base case
    if(s>=e)
        return ;
    
        //partioning
    int p;
    p=partition(arr,s,e);

    //sort left half
    quickSort(arr,s,p-1);

    //sort the right
    quickSort(arr,p+1,e);
    
    
}

int main(){

    int arr[5]={3,1,5,2,4};
    int n=5;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    

    return 0;
}