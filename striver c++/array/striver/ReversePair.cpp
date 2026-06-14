#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {40,25,19,12,9,6,2};
    int n = nums.size();
    int count = 0;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>(2*nums[j])) count++;
        }
    }
    cout<<"No. of Reverse Pair = "<<count;
    return 0;
}