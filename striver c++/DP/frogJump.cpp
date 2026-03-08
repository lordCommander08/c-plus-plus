#include<bits/stdc++.h>
using namespace std;
class Solution {
    int fib(vector<int>&stones,vector<int> &dp,int n){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        int left = fib(stones,dp,n-1)+abs(stones[n]-stones[n-1]);
        int right = INT_MAX;
        if(n>1){
            right=fib(stones,dp,n-2)+abs(stones[n]-stones[n-2]);
        }
        return dp[n]= min(left,right);
    }
public:
    int maxJump(vector<int>& stones) {
        int n = stones.size();
        vector<int> dp(n,-1);
        return fib(stones,dp,n-1);
    }
};
int main(){
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    vector<int> stones(n);
    cout << "Enter the heights of the stones: ";
    for(int i=0;i<n;i++){
        cin >> stones[i];
    }
    Solution sol;
    cout << "Minimum energy required to reach the last stone: " << sol.maxJump(stones) << endl;
}