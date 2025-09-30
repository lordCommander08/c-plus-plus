#include <bits/stdc++.h>
using namespace std;

void printSubsets(vector<int> &nums) {
    int n = nums.size();
    int total = 1 << n; // 2^n subsets

    for (int mask = 0; mask < total; mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {  // check if i-th bit is set
                subset.push_back(nums[i]);
            }
        }

        // print the subset
        cout << "{ ";
        for (int x : subset) cout << x << " ";
        cout << "}\n";
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    printSubsets(nums);
    return 0;
}