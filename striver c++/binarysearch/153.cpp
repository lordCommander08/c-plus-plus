#include<bits/stdc++.h>
using namespace std;
class minimum{
    public: 
        int findmin(vector<int> &arr,int n){
            int low=0,high=n-1;
            int ans=INT_MAX;
            int index=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(arr[low]<=arr[mid]){
                    if(arr[low]<ans){
                        ans=arr[low];
                        index=low;
                    }
                    low=mid+1;
                }
                else{
                    if(arr[mid]<ans){
                        ans=arr[mid];
                        index=mid;
                    }
                    high=mid-1;
            }
        }
        return index;
}};
int main(){
    vector<int> arr={7,9,10,11,3,5};
    int n=arr.size();
    minimum deep;
    int ans=deep.findmin(arr,n);
    cout<<ans;
}