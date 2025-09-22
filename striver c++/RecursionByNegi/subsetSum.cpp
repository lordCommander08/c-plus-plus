#include<bits/stdc++.h>
using namespace std;
void subsetSum(vector<int> &nums,int index,int n,int sum,vector<int> &result){
    if(index==n){
        result.push_back(sum);
        return;
    }
    subsetSum(nums,index+1,n,sum,result);
    subsetSum(nums,index+1,n,sum+nums[index],result);
}
int main(){
    vector<int> nums={3,4,5};
    vector<int> result;
    int sum=0;
    subsetSum(nums,0,nums.size(),sum,result);
    for(int x: result){
        cout<<x;
        cout<<endl;
    }
    return 0;
}