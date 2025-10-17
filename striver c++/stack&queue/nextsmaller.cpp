#include<bits/stdc++.h>
using namespace std;
vector<int> findnextmin(vector<int> &arr){
    int n = arr.size();
    vector<int> nse(n,-1);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        nse[i]=st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    return nse;
}
int main(){
    vector<int> arr={3,6,3,2,1,7,9};
    vector<int> result=findnextmin(arr);
    cout<<"Prefix Minimun: ";
    for(auto val : result ){
        cout<<val<<" ";
    }
    return 0;
}