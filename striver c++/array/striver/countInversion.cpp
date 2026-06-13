#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={5,3,2,4,1};
    int n = nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]) count++;
        }
    }
    cout<<"No. of inversions = "<<count;
    return 0;
}