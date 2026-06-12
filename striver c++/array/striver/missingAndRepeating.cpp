#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={4,3,6,2,1,1};
    int missing=-1,repeating=-1;
    for(int i=1;i<=nums.size();i++){
        int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==i){
                count++;
            }
        }
        if(count==2) repeating=i;
        else if(count==0) missing=i;
        if(missing!=-1 && repeating!=-1) break;
    }
    cout<<"Missing no = "<<missing<<endl;
    cout<<"repeating no = "<<repeating<<endl;
    return 0;
}