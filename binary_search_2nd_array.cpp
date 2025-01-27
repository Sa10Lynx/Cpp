#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows=matrix.size();
    int cols=matrix[0].size();

    for(int i=0;i<rows;i++){
        if (target <= matrix[i][cols - 1]) {
            // Use binary_search with iterators for the row
            if (binary_search(matrix[i].begin(), matrix[i].end(), target)) {
                return true;
            }
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