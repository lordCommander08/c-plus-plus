#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
        int v;
        vector<vector<int>> adj;
    Graph(int vertices){
        v=vertices;
        adj.resize(v);
    }
    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==false){
            adj[v].push_back(u);
        }
    }
    void printGraph(){
        for(int i=0;i<v;i++){
            cout<<"vertex"<<i<<"->";
            for(int it : adj[i]){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
};
vector<int> bfsG(int v,vector<vector<int>>& adj){
    vector<int> vis(v,0);
    queue<int> q;
    vis[0]=1;
    q.push(0);
    vector<int> bfs;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return bfs;
}
vector<int> dfsG(int node,vector<vector<int>>& adj,vector<int>& vis,vector<int>& dfs){
    vis[node]=1;
    dfs.push_back(node);
    for(auto it: adj[node]){
        if(!vis[it]){
            dfsG(it,adj,vis,dfs);
        }
    }
    return dfs;
}
int main(){
    int n,m;
    cout<<"enter the number of vertices = ";
    cin>>n;
    cout<<"enter the number of edges = ";
    cin>>m;
    cout << "Enter edges (u v):" << endl;
    Graph g(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>> v;
        g.addEdge(u,v,0);
    }
    g.printGraph();
    vector<int> result = bfsG(n, g.adj);
    cout << "BFS Traversal: ";
    for(int node : result){
        cout << node << " ";
    }
    cout<<endl;
    cout<<"DFS Traversal : ";
    vector<int> dfs;
    vector<int> vis(n,0);
    dfsG(0,g.adj,vis,dfs);
    for(int x : dfs){
        cout<<x<<" ";
    }
    return 0;
}