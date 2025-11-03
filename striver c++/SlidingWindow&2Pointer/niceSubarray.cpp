#include<bits/stdc++.h>
using namespace std;
int countlen(vector<int> &nums,int k){
    int n=nums.size();
    int l=0,r=0,oddcount=0,count=0;
    while(r<n){
        if(nums[r]%2!=0){
            oddcount++;
        }
        while(oddcount > k){
            if(nums[l]%2!=0) oddcount--;
            l++;
        }
        count+=r-l+1;
        r++;
    }
    return count;
}
int main(){
    vector<int> nums={1,1,1,2,1,1,3};
    cout<<countlen(nums,3);
    return 0;
}