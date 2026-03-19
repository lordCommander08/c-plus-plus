#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,2,4,3};
    int k = 5;
    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(k+1, 0));
    for(int i = 0; i < n; i++){
        dp[i][0] = 1;
    }
    if(nums[0] <= k) dp[0][nums[0]] = 1;
    for(int i = 1; i < n; i++){
        for(int sum = 0; sum <= k; sum++){
            int nottake = dp[i-1][sum];
            int take = 0;
            if(nums[i] <= sum){
                take = dp[i-1][sum - nums[i]];
            }
            dp[i][sum] = take + nottake;
        }
    }
    cout << dp[n-1][k];
}