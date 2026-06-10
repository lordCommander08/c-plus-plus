#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,-1,3,2,-2,-8,1,7,10,23};
    int maxi=0;
    int n=nums.size();
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         if(sum==0){
    //             maxi=max(maxi,j-i+1);
    //         }
    //     }
    // }
    int sum=0;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(map.find(sum)!=map.end()){
                maxi=max(maxi,i-map[sum]);
            }
            else{
                map[sum]=i;
            }
        }
    }
    cout<<"max subarray with sum zero "<<maxi;
    return 0;
}