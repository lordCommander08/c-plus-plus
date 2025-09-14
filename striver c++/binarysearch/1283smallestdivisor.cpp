#include<bits/stdc++.h>
using namespace std;
int findmax(vector<int>&nums){
    int maxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
        maxi=max(maxi,nums[i]);
    }
    return maxi;
}
int finddivisor(vector<int> &nums,int threshold){
    int high=findmax(nums);
    int low=1;
    while(low<=high){
        int mid=(low+high)/2;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i]/(double)mid);
        }
        if(sum>threshold){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
int main(){
    int n,threshold;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter the threshold: ";
    cin>>threshold;
    int ans=finddivisor(nums,threshold);
    cout<<"The smallest divisor is: "<<ans<<endl;
    return 0;
}