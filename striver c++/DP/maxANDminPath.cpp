#include<bits/stdc++.h>
using namespace std;
// int func(vector<vector<int>>& nums,int i,int j,vector<vector<int>>&dp){
//     int n=nums[0].size();
//     if(j<0 || j>n-1) return INT_MIN;
//     if(i==0) return nums[0][j];
//     if(dp[i][j]!=-1) return dp[i][j];
//     int up= nums[i][j] + func(nums,i-1,j,dp);
//     int ldiag=nums[i][j] + func(nums,i-1,j-1,dp);
//     int rdiag=nums[i][j] + func(nums,i-1,j+1,dp);
//     return dp[i][j]=max(up,max(ldiag,rdiag));
// }
int main(){
    vector<vector<int>> nums={{4,5,6},{9,5,1},{6,8,3}};
    int m = nums.size();
    int n=nums[0].size();
    vector<vector<int>> dp(nums.size(),vector<int>(n,0));
    int maxi=INT_MIN;
    for(int i=0;i<n;i++) dp[0][i]=nums[0][i];
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            int up = nums[i][j] + dp[i-1][j];
            int ldiag=INT_MIN,rdiag=INT_MIN;
            if(j-1>=0) ldiag=nums[i][j]+dp[i-1][j-1];
            if(j+1<n) rdiag=nums[i][j]+dp[i-1][j+1];
            dp[i][j]=max(up,max(ldiag,rdiag));
        }
    }
    for(int j=0;j<n;j++)
        maxi = max(maxi, dp[m-1][j]);

    cout << "Max Path Sum: " << maxi;

}