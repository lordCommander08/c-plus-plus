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
    return 0;
}