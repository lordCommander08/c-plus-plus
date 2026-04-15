#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {2,1,2,1,0,1,0,1};

    int n = nums.size();

    int count0=0,count1=0,count2=0;
    for(int num : nums){
        if(num == 0) count0++;
        else if(num==1) count1++;
        else count2++;
    }

    int i = 0;
    while(count0--) nums[i++] = 0;
    while(count1--) nums[i++] = 1;
    while(count2--) nums[i++] = 2;

    for(int num : nums){
        cout<<num<<" ";
    }

    return 0;
}