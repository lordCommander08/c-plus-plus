#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
     for(int i = 0; i < n; i++) {
        cout << i << " -> ";
        for(int it : adj[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
   vector<vector<int>> adjrev(n);
   vector<int> indegree(n,0);
   for(int i=0;i<n;i++){
    for(auto it:adj[i]){
        adjrev[it].push_back(i);
        indegree[it]++;
    }
   }
   cout<<endl;
   cout<<"Print REV ADJ LIST"<<endl;
    for(int i = 0; i < n; i++) {
        cout << i << " -> ";
        for(int it : adjrev[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int> res;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        res.push_back(node);
        for(auto it:adjrev[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }
    }
    sort(res.begin(),res.end());
    cout<<"Safe Nodes _> "<<endl;
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}