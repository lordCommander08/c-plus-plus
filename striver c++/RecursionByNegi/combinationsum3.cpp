#include<bits/stdc++.h>
using namespace std;
void combinationsum(vector<int> &temp,vector<vector<int>> &ans,int index,int sum,int n,int k){
    if(sum==n && k==0){
        ans.push_back(temp);
        return;
    }
    if(sum>n) return;
    for(int i=index;i<=9;i++){
        if(i>n) break;
        temp.push_back(i);
        combinationsum(temp,ans,i+1,sum+i,n,k-1);
        temp.pop_back();
    }
}
int main(){
    vector<int> temp;
    vector<vector<int>> ans;
    int k=5;
    int n=20;
    combinationsum(temp,ans,1,0,n,k);
    for(auto &x:ans){
        for(auto a:x){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}