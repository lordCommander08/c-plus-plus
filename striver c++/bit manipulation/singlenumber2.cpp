#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,6,7,12,2,1,2,12,1,6,6,12};
    sort(nums.begin(),nums.end());
    int n=nums.size();
    if(n==1 || nums[0]!=nums[1]){
        cout<<nums[0];
    }
    for(int i=1;i<nums.size()-1;i++){
        if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
            cout<<"single number is = "<<nums[i];
        }
    }
}