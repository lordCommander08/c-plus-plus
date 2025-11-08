#include<bits/stdc++.h>
using namespace std;
bool lemonadeChange(vector<int> &nums){
    int count_five=0,count_ten=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==5){
            count_five+=1;
        }
        else if(nums[i]==10){
            if(count_five){
                count_five-=1;
                count_ten+=1;
            }
            else return false;
        }
        else{
            if(count_five && count_ten){
                count_ten-=1;
                count_five-=1;
            }
            else if(count_five>=3){
                count_five-=3;
            }
            else return false;
        }
    }
    return true;
}
int main(){
    vector<int> nums={5,5,5,10,10,10,20};
    cout<<lemonadeChange(nums);
    return 0;
}