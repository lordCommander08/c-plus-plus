#include <bits/stdc++.h>
using namespace std;

bool targetSum(vector<int> &nums, int index, int n, int sum, int target) {
    if (index == n) {
        if (sum == target) {
            cout << "Target Sum Found" << endl;
            return true;
        }
        return false;
    }

    // check both choices and return result
    if (targetSum(nums, index + 1, n, sum, target)) return true;
    if (targetSum(nums, index + 1, n, sum + nums[index], target)) return true;

    return false;
}
 
int main() {
    vector<int> nums = {3, 4, 5};
    int target = 12;
    int sum = 0;

    if (!targetSum(nums, 0, nums.size(), sum, target)) {
        cout << "Target Sum Not Found" << endl;
    }
    return 0;
}