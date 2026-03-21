#include<bits/stdc++.h>
using namespace std;
    int f(vector<int>&nums,vector<vector<int>>&dp,int ind,int k){
        if(ind==0){
            if(k==0 && nums[0]==0) return 2;
            if(k==0 || k==nums[0]) return 1;
            return 0;
        }
        if(dp[ind][k]!=-1) return dp[ind][k];
        int nottake=f(nums,dp,ind-1,k);
        int take=0;
        if(nums[ind]<=k){
            take=f(nums,dp,ind-1,k-nums[ind]);
        }
        return dp[ind][k]=take+nottake;
    }
    int main(){
      vector<int> arr = {3,2,5,7};
      int diff = 1;
      int n = arr.size();
      int totalSum = 0;
      for(auto &it:arr) totalSum+=it;
      if(totalSum-diff<0 || (totalSum-diff)%2) cout<<"0";
      int k = (totalSum-diff)/2;
      vector<vector<int>>dp(n,vector<int>(k+1,-1));
      cout<<f(arr,dp,n-1,k);
    }