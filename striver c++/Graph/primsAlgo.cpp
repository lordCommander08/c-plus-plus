#include<bits/stdc++.h>
using namespace std;
int primsAlgo(int V,vector<vector<pair<int,int>>>& adj){
    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>> pq;
    vector<int> vis(V,0);
    pq.push({0,0});
    int sum = 0;
    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int node=it.second;
        int weight=it.first;
        if(vis[node]==1) continue;
        vis[node]=1;
        sum+=weight;
        for(auto it:adj[node]){
            int adjnode=it.first;
            int edw=it.second;
            if(!vis[adjnode]){
                pq.push({edw,adjnode});
            }
        }
    }
    return sum;
}
int main(){
    int V,E;
    cin >> V >> E;
    vector<vector<pair<int,int>>> adj(V);
    for(int i=0;i<E;i++){
        int u,v,wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    int res=primsAlgo(V,adj);
    cout << res << endl;
}