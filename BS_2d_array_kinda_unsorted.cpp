#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        int rowIndex=0;
        int colIndex=cols-1;

        while(rowIndex<rows && colIndex>=0){
            int element=matrix[rowIndex][colIndex];
            if(element==target){
                return true;
            }
            else if(element>target){
                colIndex--;
            }
            else{
                rowIndex++;
            }
        }
        return false;
    }
int main(){
    
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target;
    cin>>target;

    if(searchMatrix(arr,target))
        cout<<"Found"<<endl;
    else    
        cout<<"Not found"<<endl;

    return 0;
}