#include <bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int> arr = {1,2,3,4,5,6,7};
//     int k = 3;
//     int n = arr.size();
//     vector<int> nums(arr.size());
//     nums[n-1]=arr[0];
//     for(int i=0;i<arr.size()-1;i++){
//         nums[i]=arr[i+1];
//     }
//     for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<" ";
//     }
//     return 0;
// }
void reverse(vector<int>&nums,int start,int end){
        while(start<end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int n=nums.size();
    int k;
    cin>>k;
    k = k%n;
    reverse(nums,0,n-k-1);
    reverse(nums,n-k,n-1);
    reverse(nums,0,n-1);
    cout<<"right rotate by k ";
    for(auto &it:nums){
        cout<<it<<" ";
    }
    return 0;
}
