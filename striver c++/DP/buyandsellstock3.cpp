#include<bits/stdc++.h>
using namespace std;
int f(int ind,int flag,vector<int>&prices,vector<vector<vector<int>>>&dp,int n,int count){
    if(count == 0 || ind == n) return 0;
    if(dp[ind][flag][count]!=-1) return dp[ind][flag][count];
    int profit = 0;
    if(flag){
        profit = max(-prices[ind] + f(ind+1,0,prices,dp,n,count),0+f(ind+1,1,prices,dp,n,count));
    }
    else{
        profit = max( +prices[ind] + f(ind+1,1,prices,dp,n,count-1) , 0 + f(ind+1,0,prices,dp,n,count));
    }
   return dp[ind][flag][count] = profit;
}
int main(){
    vector<int> prices={3,3,5,0,0,3,1,4};
    int n = prices.size();
    vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
    cout<<f(0,1,prices,dp,n,2);
}