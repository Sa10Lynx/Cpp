#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bubSort(int *arr, int n){
    if(n==0 || n==1)
        return ;
    
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }

    bubSort(arr, n-1);
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int *arr = new int[n];

    // Input array elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    bubSort(arr, n);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}