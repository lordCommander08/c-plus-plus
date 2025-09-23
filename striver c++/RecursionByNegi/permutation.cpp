// #include<bits/stdc++.h>
// using namespace std;
// void printpermutation(vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp,vector<bool> &visited){
//     if(arr.size()==temp.size()){
//         ans.push_back(temp);
//         return;
//     }
//     for(int i=0;i<arr.size();i++){
//         if(visited[i]==0){
//             visited[i]=1;
//             temp.push_back(arr[i]);
//             printpermutation(arr,ans,temp,visited);
//             visited[i]=0;
//             temp.pop_back();
//         }
//     }
// }
// int main(){
//     vector<int> arr={2,5,3};
//     vector<vector<int>> ans;
//     vector<int> temp;
//     vector<bool> visited(3,0);
//     printpermutation(arr,ans,temp,visited);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// permutation without extra space
#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int> &arr,int n,int index,vector<vector<int>> &ans){
    if(index==n){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<n;i++){
        swap(arr[i],arr[index]);
        permutation(arr,n,index+1,ans);
        swap(arr[index],arr[i]);
    }
}
int main(){
    vector<int> arr={3,3,4};
    vector<vector<int>> ans;
    permutation(arr,arr.size(),0,ans);
   for(int i=0;i<ans.size();i++){  
        for(int j=0;j<ans[i].size();j++){ 
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}