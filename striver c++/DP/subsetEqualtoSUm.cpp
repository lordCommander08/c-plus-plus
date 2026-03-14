#include<bits/stdc++.h>
using namespace std;
bool f(int idx,int k,vector<int>&nums,vector<vector<int>>&dp){
    if(k==0) return true;
    if(idx==0) return nums[0]==k;
    if(dp[idx][k]!=-1) return dp[idx][k];
    bool nottake = f(idx-1,k,nums,dp);
    bool take = false;
    if(k >= nums[idx]){
        take = f(idx-1,k-nums[idx],nums,dp);
    }
    return dp[idx][k] = take || nottake;
}
int main(){
    vector<int> nums={2,3,1,1};
    int target=69;
    int n = nums.size();
    vector<vector<int>> dp(n,vector<int>(target+1,-1));
    cout<<(f(n-1,target,nums,dp)?"yes":"no");
    return 0;
}