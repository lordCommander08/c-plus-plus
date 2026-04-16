#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> nums = {2,2,1,1,1,2,2};
   map<int,int> mp;
   for(int i=0;i<nums.size();i++){
    mp[nums[i]]++;
   }
   for(auto it : mp){
    if(it.second>(nums.size())/2){
        cout<<it.first;
        break;
    }
   }
}