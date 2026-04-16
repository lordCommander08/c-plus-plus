#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={7,1,5,3,6,4};
    int maxi=0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(nums[j]>nums[i]){
            maxi=max(maxi,nums[j]-nums[i]);
        }
        }
    }
    cout<<"max Profit: "<<maxi;
    return 0;
}