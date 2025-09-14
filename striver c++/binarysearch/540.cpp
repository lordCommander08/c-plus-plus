#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int findSingleElement(vector<int> &arr,int n){
            for(int i=0;i<n;i++){
                if(i==0){
                    if(arr[i]!=arr[i+1]) return arr[i];
                }
                else if(i==n-1){
                    if(arr[i]!=arr[i-1]) return arr[i];
                }
                else{
                    if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                        return arr[i];
                    }
                }
            }
            return -1;
        }
};
int main(){
    vector<int> arr={1,1,2,3,3,4,4,5,5};
    int n=arr.size();
    solution deep;
    cout<<deep.findSingleElement(arr,n);
    return 0;
}