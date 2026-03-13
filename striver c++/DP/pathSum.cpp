#include<bits/stdc++.h>
using namespace std;

int minPath(vector<vector<int>>& nums, int m, int n){

    vector<vector<int>> dp(m, vector<int>(n,0));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            if(i==0 && j==0)
                dp[i][j] = nums[i][j];

            else{
                int up = INT_MAX, left = INT_MAX;

                if(i>0) up = nums[i][j] + dp[i-1][j];
                if(j>0) left = nums[i][j] + dp[i][j-1];

                dp[i][j] = min(up,left);
            }
        }
    }

    return dp[m-1][n-1];
}
int main(){
    vector<vector<int>> nums = {{1,3,1},{1,5,1},{4,2,1}};

    int m = nums.size();
    int n = nums[0].size();

    cout<<minPath(nums,m,n);

    return 0;
}