#include<bits/stdc++.h>
using namespace std;
vector<int> findnextmin(vector<int> &arr){
    int n = arr.size();
    vector<int> left(n),right(n);
    left[0]=arr[0];
    for(int i=1;i<n;i++){
        left[i]=min(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=min(right[i+1],arr[i]);
    }
    return left,right;
}
int main(){
    vector<int> arr={3,6,3,2,1,7,9};
    vector<int> result=findnextmin(arr);
    cout<<"Prefix Minimun: ";
    for(auto val : result ){
        cout<<val<<" ";
    }
    return 0;
}