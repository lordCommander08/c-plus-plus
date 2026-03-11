#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=4,n=4;
    vector<vector<int>> dp(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0 ) dp[i][j]=1;
            else{
                int up = 0;
                int left = 0;
                if(i-1>=0) up = dp [i-1] [j];
                if(j-1>=0) left = dp [i] [j-1];
                dp [i] [j] = up + left;
            }
        }
    }
    cout<<dp[m-1] [n-1];
}