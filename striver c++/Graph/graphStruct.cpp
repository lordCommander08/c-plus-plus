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
    void addEdge(int u, int v, bool direction){
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
int main(){
    int v,e;
    cout<<"enter the no of vertices -> "<<endl;
    cin>>v;
    cout<<"enter the no of edges ->"<<endl;
    cin>>e;
    Graph g(v);
    cout << "Enter edges (u v):" << endl;
    for(int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v,false);
    }
    cout<<"Graph Representation\n";
    g.printGraph();
    return 0;
}