#include<bits/stdc++.h>
using namespace std;
void findSubsequence(vector<int> &arr,int index,int size,vector<vector<int>> &ans,vector<int> &temp){
    if(index==size){
        ans.push_back(temp);
        return;
    }
    findSubsequence(arr,index+1,size,ans,temp);
    temp.push_back(arr[index]);
    findSubsequence(arr,index+1,size,ans,temp);
    temp.pop_back();
}
int main(){
    vector<int> arr={1,2,3,4};
    vector<vector<int>> ans;
    vector<int> temp;
    findSubsequence(arr,0,arr.size(),ans,temp);
     for(auto &seq : ans){
        for(int x : seq){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}