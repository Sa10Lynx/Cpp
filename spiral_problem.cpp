#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int row=matrix.size();
    int col=matrix[0].size();
    int total=row*col;
    int count=0;

    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;

    while(count<total){

        //print the starting row
        for(int i=startingCol;i<=endingCol;i++){
            ans.push_back(matrix[startingRow][i]);
        }startingRow++;

        //print the ening col
        for(int i=startingRow;i<=endingRow;i++){
            ans.push_back(matrix[i][endingCol]);
        }endingCol--;

        //print the ending row
        for(int i=endingCol;i>=startingCol;i--){
            ans.push_back(matrix[endingRow][i]);
        }endingRow--;

        //print the starting col
        for(int i=endingRow;i>=startingRow;i--){
            ans.push_back(matrix[i][startingCol]);
        }startingCol++;
    }


}
