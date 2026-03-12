#include<bits/stdc++.h>
using namespace std;
int minPath(vector<vector<int>>&nums,int m, int n,vector<vector<int>>&dp){
            if (m==0 && n==0) return nums[m][n];
            if (m<0 || n<0) return INT_MAX;
            if(dp[m][n]!=-1) return dp[m][n];
                int up = minPath(nums,m-1,n,dp);
                int left = minPath(nums,m,n-1,dp);
                int ans = nums[m][n] + min(up, left);
                return dp[m][n]=ans;
}
int main(){
    vector<vector<int>> nums = {{1,3,1},{1,5,1},{4,2,1}};
    int m=3,n=3;
    vector<vector<int>> dp(m,vector<int>(n,-1));
    cout<<minPath(nums,m-1,n-1,dp);
    return 0;
}