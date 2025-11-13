#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals){
    vector<vector<int>> res;
    sort(intervals.begin(),intervals.end());
    int n=intervals.size();
    for(int i=0;i<n;i++){
        int start=intervals[i][0];
        int end=intervals[i][1];
        if(!res.empty() && end<=res.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(intervals[j][0]<=end){
                end=max(end,intervals[j][1]);
            }
            else break;
        }
        res.push_back({start,end});
    }
    return res;
}
int main(){
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
    vector<vector<int>> ans= merge(intervals);
    cout<<"{";
    for(auto x: ans){
         cout << "[" << x[0] << "," << x[1] << "] ";
    }
    cout<<"}";
    return 0;
}