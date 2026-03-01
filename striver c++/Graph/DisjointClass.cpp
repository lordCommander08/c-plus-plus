#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int> parent,rank,size;
public:
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int findUpr(int node){
        if(node==parent[node]) return node;
        return parent[node]=findUpr(parent[node]);
    }
    void unionBysize(int u,int v){
        int ulp_u=findUpr(u);
        int ulp_v=findUpr(v);
        if(ulp_u==ulp_v) return;
        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
        else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }
    void unionByrank(int u,int v){
        int ulp_u=findUpr(u);
        int ulp_v=findUpr(v);
        if(ulp_u==ulp_v) return;
        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_v]<rank[ulp_u]){
            parent[ulp_v]=ulp_u;
        }
        else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }
    }
};
int main(){
    DisjointSet ds(7);
    ds.unionBysize(1,2);
    ds.unionBysize(2,3);
    ds.unionBysize(4,5);
    ds.unionBysize(6,7);
    if(ds.findUpr(3)==ds.findUpr(7)){
        cout << "Same" << endl;
    }
    else{
        cout << "Not Same" << endl;
    }
    ds.unionBysize(5,6);
    ds.unionBysize(3,7);
    if(ds.findUpr(3)==ds.findUpr(7)){
        cout << "Same" << endl;
    }
    else{
        cout << "Not Same" << endl;
    }
}