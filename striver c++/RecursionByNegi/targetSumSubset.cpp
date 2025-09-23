#include<bits/stdc++.h>
using namespace std;
int Subset(vector<int> &nums,int index,int n,int sum){
    if(sum==0) return 1;
    if(sum<0 || index==n) return 0;
    return Subset(nums,index+1,n,sum) + Subset(nums,index+1,n,sum-nums[index]);
}
int main(){
    vector<int> nums={2,3,4,5};
    int sum=7;
    cout<<Subset(nums,0,nums.size(),sum);
}