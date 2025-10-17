#include<bits/stdc++.h>
using namespace std;
int sumarraymin(vector<int> &arr){
    int n = arr.size();
    long long sum = 0;
    const int MOD = 1e9+7;
    for(int i=0;i<n;i++){
        int mini=arr[i];
        for(int j=i;j<n;j++){
            mini=min(mini,arr[j]);
            sum+=mini;
            sum%=MOD;
        }
    }
    return sum;
}
int main(){
    vector<int> arr={3,1,2,4};
    cout<<"SUM OF SUBARRAY MINIMUMS = ";
    cout<<sumarraymin(arr);
    return 0;
}