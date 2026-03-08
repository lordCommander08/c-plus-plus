#include<bits/stdc++.h>
using namespace std;
// Tabulation method
// int fib(int n,vector<int> &dp){
//     if(n<=1) return n;
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    // vector<int> dp(n+1,-1);
    // cout << fib(n,dp) << endl;
    int prev=1,prev2=0;
    for(int i=2;i<=n;i++){
        int curri=prev+prev2;
        prev2=prev;
        prev=curri;
    }
    cout<<prev;
}