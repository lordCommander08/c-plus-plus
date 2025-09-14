#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      float floorSqrt(long n) {
      float low=1,high=n;
      float ans=1;
      while(low<=high){
        long mid=(low+high)/2;
        if((mid*mid)<=n){
            ans=mid;
            low=mid+1;
        }
        else {
            high=mid-1;
        }
      }
      return ans;
    }
};
int main(){
    float n;
    cin>>n;
    Solution obj;
    cout<<obj.floorSqrt(n)<<endl;
    return 0;
}