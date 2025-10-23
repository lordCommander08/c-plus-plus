#include<bits/stdc++.h>
using namespace std;
vector<int> WindowMax(vector<int> &arr,int k){
    int n = arr.size();
    vector<int> result;
    for(int i=0;i<=n-k;i++){
        int maxi=arr[i];
        for(int j=i;j<i+k;j++){
            maxi=max(maxi,arr[j]);
        }
        result.push_back(maxi);
    }
    return result;
}
int main()
{
    int k=3;
    vector<int> arr={1,3,-1,-3,5,3,2,1,6};
    vector<int> ans=WindowMax(arr,k);
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}