#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={5,3,7,5,3,1,2,7};
    sort(nums.begin(),nums.end());
    for(int x:nums){
        cout<<x<<" ";
    }
    return 0;
}