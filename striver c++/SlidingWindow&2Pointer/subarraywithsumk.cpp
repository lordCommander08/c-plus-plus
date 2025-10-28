#include<bits/stdc++.h>
using namespace std;
int maxilen(vector<int> &arr, int k) {
    int n=arr.size();
    int maxlen=0,sum=0,l=0;
    for(int r=0;r<n;r++){
        sum+=arr[r];
        while(sum>k && l<=r){
            sum-=arr[l];
            l++;
        }
        maxlen=max(maxlen,r-l+1);
    }
    return maxlen;
}
int main(){
    vector<int> arr={2,5,1,7,10};
    cout<<maxilen(arr,14);
    return 0;
}