#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={2,3,4,6,2,3,5,6};
    int n = nums.size();
    int sum=0;
    int maxi=nums[0];
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum<0) sum=0;
        maxi=max(sum,maxi);
    }
    cout<<"subarray with maxsum: "<<maxi;
    return 0;
}