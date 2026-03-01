#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int> parent,size;
public:
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int findUpr(int node){
        if(node==parent[node]) return node;
        return parent[node]=findUpr(parent[node]);
    }
    void unionBysize(int u, int v){
        int ulp_u=findUpr(u);
        int ulp_v=findUpr(v);
        if(ulp_u==ulp_v) return;
        if(size[ulp_v]<=size[ulp_u]){
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
        else{
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=ulp_u;
        }
    }
};
int main(){
    int V,E;
    cin >> V >> E;
    vector<vector<int>> edges;
    for(int i=0;i<E;i++){
        int u,v,wt;
        cin >> u >> v >> wt;
        edges.push_back({wt,u,v});
    }
    DisjointSet ds(V);
    sort(edges.begin(),edges.end());
    int sum = 0;
    for(auto it:edges){
        int wt=it[0];
        int u=it[1];
        int v=it[2];
        if(ds.findUpr(u)!=ds.findUpr(v)){
            ds.unionBysize(u,v);
            sum+=wt;
        }
    }
    cout << sum << endl;
}