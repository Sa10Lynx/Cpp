#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool linearSearch(int *arr, int size, int target){
    if(size==0)
        return 0;

    if(target==arr[0])
        return true;

    return linearSearch(arr+1,size-1,target);
}

int main(){
    int arr[5]={1,2,3,4,5};
    if(linearSearch(arr,5,2))
        cout<<"Yes"<<endl;
    else    
        cout<<"No"<<endl;
}