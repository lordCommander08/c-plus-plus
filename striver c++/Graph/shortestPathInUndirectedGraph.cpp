#include<bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
    vector<vector<pair<int,int>>> adj(n);

    for(int i = 0; i < m; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];

        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    vector<int> dist(n, 1e9);
    dist[0] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,0});

    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();

        int dis = it.first;
        int node = it.second;

        for(auto it : adj[node]){
            int adjnode = it.first;
            int edw = it.second;

            if(dis + edw < dist[adjnode]){
                dist[adjnode] = dis + edw;
                pq.push({dist[adjnode], adjnode});
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(dist[i] == 1e9) dist[i] = -1;
    }

    return dist;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges(m, vector<int>(3));

    for(int i = 0; i < m; i++){
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }

    vector<int> res = shortestPath(n, m, edges);

    for(int x : res){
        cout << x << " ";
    }

    return 0;
}