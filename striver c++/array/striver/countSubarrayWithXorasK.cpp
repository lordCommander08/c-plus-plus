#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={2,3,4,1,2,4,5};
    int n = nums.size();
    int k = 2 ;
    int count = 0;
    for(int i=0;i<n;i++){
        int xr = 0;
        for(int j=i;j<n;j++){
            xr = xr ^ nums[j];
            if(xr==k){
                count++;
            }
        }
    }
    cout<<"subarray with xr as k : "<<count;
    return 0;
}