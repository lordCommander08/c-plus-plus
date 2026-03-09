#include<bits/stdc++.h>
using namespace std;
// memoization
// int solve(int n,vector<int>&heights,int k){
// //     if(n==0) return 0;
// //     int minsteps=INT_MAX;
// //     for(int i=1;i<=k;i++){
// //         if(n-i >= 0){
// //         int jump = solve(n-i,heights,k)+abs(heights[n]-heights[n-i]);
// //         minsteps=min(minsteps,jump);
// //         }
// //     }
// //     return minsteps;
// // }
int main(){
    vector<int> heights={20,10,40,70,30};
    int n = heights.size();
    vector<int> dp(n,0);
    int k=3;
    dp[0]=0;
    for(int i=1;i<n;i++){
        int minsteps=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump=dp[i-j]+abs(heights[i]-heights[i-j]);
                minsteps=min(minsteps,jump);
            }
        }
        dp[i]=minsteps;
    }
    cout<<"MINIMUM ENERGY: "<<dp[n-1];
    return 0;
}