#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void wavePrint(int arr[][4], int nRows, int mCols)
{
    int ans[nRows*mCols];

    for(int col=0;col<mCols;col++){
        if(col%2!=0){
            for(int row=nRows-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int row=0;row<nRows;row++){
                cout<<arr[row][col]<<" ";
            }
            cout<<endl;
        }
    }

}

int main(){

    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"How normally it prints:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"How it prints after the wave Print func:"<<endl;
    wavePrint(arr,3,4);
    
}