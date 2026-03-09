#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int>&heights,vector<int>&dp){
    if(n==0) return 0;
    int left=fib(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
    int right=INT_MAX;
    if(n>1){
        right=fib(n-2,heights,dp)+abs(heights[n]-heights[n-1]);
    }
    return dp[n]=min(left,right);
}
int main(){
    vector<int> heights={10,20,30,20,40};
    int n=heights.size();
    vector<int> dp(n+1,-1);
    cout<<"minimum energy: "<<fib(n-1,heights,dp);
    return 0;
}