#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> wt={3,4,5};
    vector<int> val={30,50,60};
    int  n = val.size();
    int W=8;
    vector<vector<int>> dp(n,vector<int>(W+1,0));
    for(int w=wt[0];w<=W;w++){
        dp[0][w]=val[0];
    }
    for(int ind=1;ind<n;ind++){
        for(int w=0;w<=W;w++){
            int nottake=0+dp[ind-1][w];
            int take=INT_MIN;
            if(wt[ind]<=w){
                take=val[ind]+dp[ind-1][w-wt[ind]];
            }
            dp[ind][w]=max(take,nottake);
        }
    }
    cout<<dp[n-1][W];
}