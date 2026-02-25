#include<bits/stdc++.h>
using namespace std;
int cheapestFlight(int n,vector<vector<int>>&flights,int src,int dst,int k){
    vector<vector<pair<int,int>>> adj(n);
    for(int i=0;i<n;i++){
        int u=flights[i][0];
        int v=flights[i][1];
        int wt=flights[i][2];
        adj[u].push_back({v,wt});
    }
    vector<int> dist(n,1e9);
    dist[src]=0;
    queue<pair<int,pair<int,int>>> q;
    q.push({0,{src,0}});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int stop=it.first;
        int node=it.second.first;
        int cost=it.second.second;
        if(stop>k) continue;
        for(auto iter : adj[node]){
            int adjnode=iter.first;
            int price=iter.second;
            if(price+cost < dist[adjnode] && stop<=k){
                dist[adjnode]=cost+price;
                q.push({stop+1,{adjnode,price+cost}});
            }
        }
    }
    if(dist[dst]==1e9) return -1;
    return dist[dst];
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> flights(m,vector<int>(3));
    for(int i=0;i<m;i++){
        cin >> flights[i][0] >> flights[i][1] >> flights[i][2];
    }
    int src,dst,k;
    cin >> src >> dst >> k;
    int res=cheapestFlight(n,flights,src,dst,k);
    cout << res << endl;
}