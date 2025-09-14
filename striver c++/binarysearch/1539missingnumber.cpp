#include<bits/stdc++.h>
using namespace std;
int findMissingNumber(vector<int> &nums,int k){
    int n=nums.size();
    // for(int i=0;i<n;i++){
    //     if(nums[i]<k){
    //         k++;
    //     }
    // }
    // return k;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing=nums[mid]-(mid+1);
        if(missing<k){
            low=mid+1;
        }
        else high=mid-1;
    }
    return low+k;
}
int main(){
    vector<int> nums;
    int n;
    cout<<"enter the size of the array= "<<endl;
    cin>>n;
    cout<<"enter the elements in the array"<<" ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"enter the index u want to know"<<endl;
        int k;
        cin>>k;
        cout<<findMissingNumber(nums,k);
        return 0;
}