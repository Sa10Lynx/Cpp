#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }

    //exclude part
    solve(nums,output,index+1,ans);

    //include part
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);

}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;

    solve(nums, output, index, ans);

    return ans;
}


int main(){
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);  // ✅ FIX: Correctly assign returned subsets

    for (int i = 0; i < ans.size(); i++) {  // ✅ FIX: Use ans.size() instead of ans[0].size()
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << ' ';
        }
        cout << endl;  // ✅ Print each subset in a new line
    }
}