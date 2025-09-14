#include<bits/stdc++.h>
using namespace std;
vector<int> unionarr(int arr1[],int arr2[],int n,int m){
    set<int> st;
    vector<int> temp;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
};
int main(){
    int arr1[]={1,2,3,4,7,8};
    int n=6;
    int arr2[]={4,5,6,3,2};
    int m=5;
    vector<int> a = unionarr(arr1,arr2,n,m);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}