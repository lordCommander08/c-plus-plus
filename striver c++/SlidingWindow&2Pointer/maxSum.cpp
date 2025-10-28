#include<bits/stdc++.h>
using namespace std;
int MaxSum(vector<int> &arr,int k){
    // int maxi=0;
    // int n=arr.size();
    // for(int i=0;i<=n-k;i++){
    //     int sum=0;
    //     for(int  j=i;j<i+k;j++){
    //         sum+=arr[j];
    //         maxi=max(sum,maxi);
    //     }
    // }
    // return maxi;
    int l=0,r=k-1;
    int maxsum=0;
     int sum=0;
     int n=arr.size();
    for(int i=l;i<=r;i++){
         sum+=arr[i];
    }
        while(r<n){
            maxsum=max(sum,maxsum);
            sum=sum-arr[l];
            l++;
            r++;
            sum+=arr[r];
        }
    
    return maxsum;
}
int main(){
    vector<int> arr={-1,2,3,3,4,5,-1};
    cout<<"max sum of substring = "<<MaxSum(arr,4);
    return 0;
}