#include<bits/stdc++.h>
using namespace std;
void swapg(vector<int>&nums1,vector<int>&nums2,int n,int m){
    if(nums1[n]>nums2[m]){
        swap(nums1[n],nums2[m]);
    }

}
int main(){
    vector<int> nums1 = {1, 4, 7, 8, 10};
    vector<int> nums2 = {2, 3, 9};
    int n = nums1.size();
    int m = nums2.size();
    int len  = n+m;
    int gap = (len/2) + (len%2);
    while(gap>0){
        int left=0;
        int right = left + gap;
        while(right<len){
            if(left<n && right>=n){
                swapg(nums1,nums2,left,right-n);
            }
            else if(left>=n){
                swapg(nums2,nums2,left-n,right-n);
            }
            else{
                swapg(nums1,nums1,left,right);
            }
            left++,right++;
        }
        if(gap==1) break;
        gap=(gap/2) + (gap%2);
    }
    cout << "nums1: ";
    for (int x : nums1){
        cout<<x<<" ";
    }
    cout << "\nnums2: ";
    for (int x : nums2){
        cout<<x<<" ";
    }
    return 0;
}