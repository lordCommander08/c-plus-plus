#include<bits/stdc++.h>
using namespace std;
// memoization
// int robber(int n,vector<int>&nums,vector<int>&dp){
//     if(n==0) return nums[0];
//     if(n<0) return 0;
//     if(dp[n]!=-1) return dp[n];
//     int pick = nums[n]+robber(n-2,nums,dp);
//     int notpick= 0 + robber(n-1,nums,dp);
//     return dp[n]=max(pick,notpick);
// }
int main(){
    vector<int> nums={2,1,4,9};
    int n=nums.size();
    if(n==0) return 0;
    // vector<int> dp(n,-1);
    // dp[0]=nums[0];
    // for(int i=1;i<n;i++){
    //     int pick = nums[i]+(i>1?dp[i-2]:0);
    //     int notpick = 0 + dp[i-1];
    //     dp[i]=max(pick,notpick);
    // } 
    // cout<<dp[n-1];
    //  space optimised
    int prev = nums[0];
    int prev2 = 0;
    for(int i=1;i<n;i++){
        int take = nums[i];
        if(i>1) take+=prev2;
        int nottake = 0+prev;
        int curr=max(take,nottake);
        prev2=prev;
        prev = curr;
    }
    cout<<prev;
}