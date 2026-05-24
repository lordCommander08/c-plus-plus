#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    set<vector<int>> st;
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    for(auto& v : st)
        ans.push_back(v);
    for(auto it:ans){
        for(int x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}