#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void mergeArray(vector<int>& arr,int low,int mid,int high){
    vector<int> temp;
    int left=low,right=mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
        }
    }
    while(left<=mid) temp.push_back(arr[left++]);
    while(right<=high) temp.push_back(arr[right++]);
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void countPairs(vector<int>& nums,int low,int mid,int high){
    int right=mid+1;
    for(int i=low;i<=mid;i++){
        while(right<=high&&nums[i]>2LL*nums[right]) right++;
        cnt+=right-(mid+1);
    }
}

void mergeSort(vector<int>& arr,int low,int high){
    if(low>=high) return;
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    countPairs(arr,low,mid,high);
    mergeArray(arr,low,mid,high);
}
int main(){
    vector<int> nums={5,3,2,4,1};
    mergeSort(nums,0,nums.size()-1);
    cout<<cnt;
    return 0;
}