#include<bits/stdc++.h>
using namespace std;
void printpermutation(vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp,vector<bool> &visited){
    if(arr.size()==temp.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<arr.size();i++){
        if(visited[i]==0){
            visited[i]=1;
            temp.push_back(arr[i]);
            printpermutation(arr,ans,temp,visited);
            visited[i]=0;
            temp.pop_back();
        }
    }
}
int main(){
    vector<int> arr={2,5,3};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(3,0);
    printpermutation(arr,ans,temp,visited);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}