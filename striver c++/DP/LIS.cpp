#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={10,9,2,5,3,7,101,18};
    vector<int> temp;
    int length = 1;
    temp.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        if(nums[i]>temp.back()){
            temp.push_back(nums[i]);
            length++;
        }
        else{
            int ind = lower_bound(temp.begin(),temp.end(),nums[i]) -temp.begin();
            temp[ind]=nums[i];
        }
    }
    cout<<"length of LIS = "<<length;
    return 0;
}