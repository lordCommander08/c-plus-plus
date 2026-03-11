#include<bits/stdc++.h>
using namespace std;
int func(vector<vector<int>>&points,vector<vector<int>>&dp,int day,int last){
    if(day==0){
        int maxi=0;
        for(int task=0;task<3;task++){
            if(task!=last){
                maxi=max(maxi,points[0][task]);
            }
        }
        return maxi;
    }
    if(dp[day][last]!=-1) return dp[day][last];
    int maxi=0;
    for(int task=0;task<3;task++){
        if(task!=last){
            int point=points[day][task]+func(points,dp,day-1,task);
            maxi=max(maxi,point);
        }
    }
    return dp[day][last]=maxi;
}
int main(){
    vector<vector<int>> points={{10,40,70},{20,50,80},{30,60,90}};
    int n = points.size();
    vector<vector<int>> dp(n,vector<int>(4,-1));
    // dp[0][0] = max(points[0][1],points[0][2]);
    // dp[0][1] = max(points[0][0],points[0][2]);
    // dp[0][2] = max(points[0][0],points[0][1]);
    // dp[0][3] = max({points[0][0],points[0][1],points[0][2]});
    // // for(int day=1;day<n;day++){
    // //     for(int last=0;last<4;last++){
    // //         dp[day][last]=0;
    // //         for(int task=0;task<3;task++){
    // //             if(task!=last){
    // //                 int point=points[day][task]+dp[day-1][task];
    // //                 dp[day][last]=max(dp[day][last],point);
    // //             }
    // //         }
    // //     }
    // // }
    // // cout<< dp[n-1][3];
    cout<<func(points,dp,n-1,3);
    return 0;
}