#include<bits/stdc++.h>
using namespace std;
vector<int> stockSpan(vector<int> &arr,int n){
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int currspan=1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]<=arr[i]){
                currspan++;
            }
            else break;
        }
        ans[i]=currspan;
    }
    return ans;
}
int main(){
    vector<int> arr={7,2,1,3,3,1,8};
    int n=arr.size();
    vector<int> res=stockSpan(arr,n);
    for(auto x: res){
        cout<<x<<",";
    }
    return 0;
}
