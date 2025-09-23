#include<bits/stdc++.h>
using namespace std;
void noRepitition(vector<int> &nums,set<vector<int>> &st,int index,int n){
    if(index==n){
        st.insert(nums);
        return;
    }
    for(int i=index;i<n;i++){
        swap(nums[i],nums[index]);
        noRepitition(nums,st,index+1,n);
        swap(nums[index],nums[i]);
    }
}
int main(){
    vector<int> arr={3,3,4,5};
    set<vector<int>> st;
    noRepitition(arr,st,0,arr.size());
    for(auto &vec:st){
        for(int x:vec){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}