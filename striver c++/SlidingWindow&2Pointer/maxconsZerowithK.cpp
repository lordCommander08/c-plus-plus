#include<bits/stdc++.h>
using namespace std;
int maxilen(vector<int> &nums,int k){
    int maxlen=0,l=0,r=0,zerocount=0;
    while(r<nums.size()){
        if(nums[r]==0) zerocount++;
        if(zerocount > k){
            if(nums[l]==0) zerocount--;
            l++;
        }
        if(zerocount<=k){
            int len=r-l+1;
            maxlen=max(len,maxlen);
        }
        r++;
    }
    return maxlen;
}
int main(){
    vector<int> nums={1,1,1,1,1,0,0,0,1,1,1,1,0,0,1};
    cout<<"maxlen of subarray with max 1s including k zeroes = ";
    cout<<maxilen(nums,2);
    return 0;
}