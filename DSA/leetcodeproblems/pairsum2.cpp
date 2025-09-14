#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pairsum(vector<int> nums, int target) {
    vector<pair<int, int>> ans; // Change to store pairs
    int n = nums.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int currentSum = nums[i] + nums[j]; // Rename to avoid shadowing
        if (currentSum == target) {
            ans.push_back({nums[i], nums[j]}); // Store the pair
            i++; // Move both pointers after finding a pair
            j--;
        } else if (currentSum > target) {
            j--; // Decrease j to get a smaller sum
        } else {
            i++; // Increase i to get a larger sum
        }
    }
    
    return ans; // Return the list of pairs
}
