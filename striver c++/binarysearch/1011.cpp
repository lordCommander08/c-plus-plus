#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int> &nums){
    int maxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
        maxi=max(maxi,nums[i]);
    }
    return maxi;
}
int findDay(vector<int> &nums,int capacity){
    int days=1,load=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]+load>capacity){
            days++;
            load=nums[i];
        }
        else{
            load+=nums[i];
        }
    }
    return days;
}
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    int low=findMax(nums);
    int high=accumulate(nums.begin(),nums.end(),0);
    int givenday;
    cout<<"enter the days= ";
    cin>>givenday;
    int ans;
    while(low<=high){
        int mid=(low+high)/2;
        int days=findDay(nums,mid);
        if(days<=givenday){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<"minimum no. of days="<<ans;
    return 0;
}