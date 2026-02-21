#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>&vis,vector<vector<int>>&adj,stack<int>&st){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj,st);
        }
    }
    st.push(node);
}
int main(){
    int v=5;
    vector<vector<int>> adj={
        {1,2},{3},{},{4},{2}
    };
    vector<int> vis(v,0);
    stack<int> st;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i,vis,adj,st);
        }
    }
    vector<int> res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}