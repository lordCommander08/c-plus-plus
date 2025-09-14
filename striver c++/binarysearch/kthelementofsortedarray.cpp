#include<bits/stdc++.h>
using namespace std;
int findkth(vector<int> &nums1,vector<int> &nums2,int k){
    vector<int> ans;
    int i=0,j=0;
    int n1=nums1.size(),n2=nums2.size();
    while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]) ans.push_back(nums1[i++]);
        else ans.push_back(nums2[j++]);
    }
    while(i<n1) ans.push_back(nums1[i++]);
    while(j<n2) ans.push_back(nums2[j++]);
    for(int a: ans){
        cout<<a<<" ";
    }
    cout<<endl;
    int n=ans.size();
    int a=0;
    while(a<n){
        if(ans[a]==k) return a;
        else a++;
    }
    return -1;
}
int main(){
    vector<int> arr1={1,3,4,6,7};
    vector<int> arr2={2,5,8,9};
    int k;
    cout<<"enter the kth element u want to search= ";
    cin>>k;
    cout<<findkth(arr1,arr2,k);
    return 0;
}