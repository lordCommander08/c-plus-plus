#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low,int high,int mid){
    vector<int> temp(high-low+1);
    int index=0;
    int left=low,right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[index++]=arr[left++];
        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    while(right<=high){
        temp[index]=arr[right];
        index++,right++;
    }
    index=0;
    while(low<=high){
        arr[low]=temp[index];
        low++,index++;
    }
}
void mergesort(vector<int> &arr,int low,int high){
    int mid=(low+high)/2;
    if(low==high) return;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high,mid);
}
int main(){
    vector<int> nums={4,3,9,1,6,2,5,8};
    mergesort(nums,0,nums.size()-1);
    for(int x: nums) cout<<x<<" ";
    cout<<endl;
    return 0;
}