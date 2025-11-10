#include<bits/stdc++.h>
using namespace std;
bool JumpGame(vector<int>& arr){
    int jump=0;
    if(arr[0]==0) return false;
    for(int i=0;i<arr.size();i++){
        if(i>jump) return false;
        jump=max(jump,i+arr[i]);
    }
    return true;
}
int main(){
    vector<int> arr={3,2,1,1,4};
    cout<<JumpGame(arr);
    return 0;
}