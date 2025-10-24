#include<bits/stdc++.h>
using namespace std;
vector<int> WindowMax(vector<int> &arr,int k){
    int n = arr.size();
    vector<int> result;
    deque<int> dq;
    for(int i=0;i<n;i++){
        // Remove elements out of the current window
        if(!dq.empty() && dq.front() == i - k){
            dq.pop_front();
        }
        // Remove elements smaller than the current element from the back of the deque
        while(!dq.empty() && arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        // Add the current element index to the deque
        dq.push_back(i);
        // If we have processed at least k elements, add the maximum to the result
        if(i >= k - 1){
            result.push_back(arr[dq.front()]);
        }
    }
    return result;
}
int main()
{
    int k=3;
    vector<int> arr={1,3,-1,-3,5,3,2,1,6};
    vector<int> ans=WindowMax(arr,k);
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}