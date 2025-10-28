#include<bits/stdc++.h>
using namespace std;
int MaxSum(vector<int> &arr,int k){
    int maxi=0;
    int n=arr.size();
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int  j=i;j<i+k;j++){
            sum+=arr[j];
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}
int main(){
    vector<int> arr={-1,2,3,3,4,5,-1};
    cout<<"max sum of substring = "<<MaxSum(arr,4);
    return 0;
}