#include<bits/stdc++.h>
using namespace std;
// int fib(int n,vector<int>&heights,vector<int>&dp){
//     if(n==0) return 0;
//     int left=fib(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
//     int right=INT_MAX;
//     if(n>1){
//         right=fib(n-2,heights,dp)+abs(heights[n]-heights[n-1]);
//     }
//     return dp[n]=min(left,right);
// }
int main(){
    vector<int> heights={10,20,30,20,40};
    int n=heights.size();
    vector<int> dp(n,0);
    // dp[0]=0;
    // dp[1] = 1;
    // for(int i=1;i<n;i++){
    //     int left = dp[i-1]+abs(heights[i-1]-heights[i]);
    //     int right=INT_MAX;
    //     if(i>1){
    //         right=dp[i-2]+abs(heights[i-2]-heights[i]);
    //     }
    //     dp[i]=min(left,right);
    // }
    int prev=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int left=prev + abs(heights[i]- heights[i-1]);
        int right = INT_MAX;
        if(i>1){
            right = prev2 + abs(heights[i] - heights[i-2]);
        }
        int curi=min(left,right);
        prev2=prev;
        prev=curi;
    }
    cout<<"minimum energy: "<<prev;
    return 0;
}