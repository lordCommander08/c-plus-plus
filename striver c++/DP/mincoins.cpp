#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> coins={1,2,5};
    int target=13;
    int n = coins.size();
    vector<vector<int>>dp(n,vector<int>(target+1,0));
    for(int t=0;t<=target;t++){
        if(t%coins[0]==0) dp[0][t]=t/coins[0];
        else dp[0][t]=INT_MAX-1;
    }
    for(int ind=1;ind<n;ind++){
        for(int t=0;t<=target;t++){
            int nottake=0+dp[ind-1][t];
            int take=INT_MAX;
            if(coins[ind]<=target){
                take=1+dp[ind][t-coins[ind]];
            }
            dp[ind][t]=min(take,nottake);
        }
    }
    cout<<dp[n-1][target];
}