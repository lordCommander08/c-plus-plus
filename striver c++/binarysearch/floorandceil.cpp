// #include<bits/stdc++.h>
// using namespace std;
// class solution{
//     public:
//         pair<int,int> floorAndCeil(vector<int> &arr,int n,int x){
//             int floor=-1,ceil=-1;
//             int l=0,h=n-1;
//             while(l<=h){
//                 int mid=l+(h-l)/2;
//                 if(arr[mid]==x){
//                     floor=arr[mid];
//                     ceil=arr[mid];
//                     break;
//                 }
//                 else if(arr[mid]<x){
//                     floor=arr[mid];
//                     l=mid+1;
//                 }
//                 else{
//                     ceil=arr[mid];
//                     h=mid-1;
//                 }
//             }
//             return {floor,ceil};
//         }
// };
// int main(){
//     vector<int> arr={1,2,8,10,10,12,19};
//     int n=arr.size();
//     int x=11;
//     solution deependra;
//     pair<int,int> ans=deependra.floorAndCeil(arr,n,x);
//     cout<<ans.first<<" "<<ans.second;
// }
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int floorVal(vector<int> &nums, int x, int n) {
        int low = 0, high = n - 1;
        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] <= x) {
                ans = nums[mid];   // candidate for floor
                low = mid + 1;     // try to find a bigger one
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    int ceilVal(vector<int> &nums, int x, int n) {
        int low = 0, high = n - 1;
        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2; // ✅ fixed
            if (nums[mid] >= x) {
                ans = nums[mid];   // candidate for ceil
                high = mid - 1;    // try to find a smaller one
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 8, 10, 10, 12, 19};
    int n = nums.size();
    int x = 11;

    Solution deependra;
    cout << deependra.floorVal(nums, x, n) << " " 
         << deependra.ceilVal(nums, x, n);

    return 0;
}
