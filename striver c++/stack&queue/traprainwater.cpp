#include<bits/stdc++.h>
using namespace std;
int trapWater(vector<int> &nums){
    int n=nums.size();
    vector<int> left(n),right(n);
    left[0]=nums[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],nums[i]);
    }
    right[n-1]=nums[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],nums[i]);
    }
    int water=0;
    for(int i=0;i<n;i++){
        water+=min(left[i],right[i])-nums[i];
    }
    return water;
}
int main(){
    vector<int> nums={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<"trapped water = "<<trapWater(nums)<<" units";
    return 0;
}