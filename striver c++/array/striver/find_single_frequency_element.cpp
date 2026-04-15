#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={2,1,4,5,2,4,1,5};
    unordered_map<int,int> freq;
    for(int num:nums){
        freq[num]++;
    }
    for(auto it:freq){
        if(it.second==1) {
            cout<<"The Element With Freq. 1 is: "<< it.first;
            break;
    }
}
cout<<"All distinct element has freq 2";
}