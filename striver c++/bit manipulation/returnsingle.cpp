#include<bits/stdc++.h>
using namespace std;
int findsingle(vector<int> &nums){
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans=ans ^ nums[i];
    }
    return ans;
}
int main(){
    vector<int> num={1,2,3,4,2,4,1};
    int a=findsingle(num);
    cout<<a;
}