#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int> &nums){
    long long maxi=0;
    for(int i=0;i<nums.size()-1;i++){
        maxi=max(maxi,(nums[i+1]-nums[i]));
    }
    return maxi;
}
int main(){
    vector<int> nums={1,2,3,5,6,7,9,10};
    int ans=findMax(nums);
    cout<<"maximum distance= "<<ans;
    return 0;
}