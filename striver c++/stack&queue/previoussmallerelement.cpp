#include<bits/stdc++.h>
using namespace std;
vector<int> findPrevSmall(vector<int> &arr){
    int n=arr.size();
    stack<int> st;
    vector<int> result(n,-1);
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        result[i]= st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    return result;
}
int main(){
    vector<int> nums={2,3,4,2,5,6};
    vector<int> res=findPrevSmall(nums);
    for(int x:res){
        cout<<x<<" ";
    }
}