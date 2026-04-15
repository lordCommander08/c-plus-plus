#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {2,3,1,4,5,8};
    int n = nums.size();
    int k=9;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==k && j==i+1){
                cout<<i<<" "<<j<<endl;
                break;
            }
        }
    }
}