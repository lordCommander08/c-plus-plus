#include<bits/stdc++.h>
using namespace std;
void settargetsum(vector<int> &nums,set<vector<int>> &ans,vector<int> &temp,int index,int n,int sum,int target){
    if(index==n){
        if(sum==target){
            ans.insert(temp);
        }
        return;
    }
    settargetsum(nums,ans,temp,index+1,n,sum,target);
    temp.push_back(nums[index]);
    settargetsum(nums,ans,temp,index+1,n,sum+nums[index],target);
    temp.pop_back();
}
int main(){

    vector<int> nums={2,5,2,1,2};
    int n=nums.size();
    set<vector<int>> ans;
    vector<int> temp;
    settargetsum(nums,ans,temp,0,n,0,5);
    for(auto &x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}