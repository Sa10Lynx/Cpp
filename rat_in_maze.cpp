#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& m){
    
    if((x>=0 && x<n) &&(y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1)
        return true;
    
    else
        return false;

}

void solve(vector<vector<int>>& m, int n, vector<string>& ans, int x, int y, 
    vector<vector<int>>& visited, string path){

    //base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return ;
    }

    visited[x][y]=1; //visited the block

    //the rat has 4 choices to move D, L, R, U

    //down check
    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('D');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();//back track
    }

    //left check
    newx=x;
    newy=y-1;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('L');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();//back track
    }

    //up check
    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('U');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();//back track
    }

    //right check
    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('R');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();//back track
    }


    visited[x][y]=0; //backtrack

}

vector<string> findPath(vector<vector<int>>& m, int n){
    vector<string> ans;

    if(m[0][0]==0)
        return ans;

    int srcX=0;
    int srcY=0;

    vector<vector<int>> visited = m;

    //initializing with all 0
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }

    string path="";

    solve(m,n,ans,srcX,srcY,visited,path);

    sort(ans.begin(),ans.end());

    return ans;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    
    int n = maze.size();
    vector<string> paths = findPath(maze, n);

    if (paths.empty()) {
        cout << "No path found!" << endl;
    } else {
        cout << "Possible Paths: ";
        for (string path : paths) {
            cout << path << " ";
        }
        cout << endl;
    }

    return 0;
}