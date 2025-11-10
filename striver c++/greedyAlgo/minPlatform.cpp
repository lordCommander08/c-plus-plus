#include <bits/stdc++.h>
using namespace std;

int findPlatform(int n, vector<int> &arr, vector<int> &dep) {
    int ans = 1;

    for (int i = 0; i < n; i++) {
        int count = 1; // at least one train on platform
        for (int j = i + 1; j < n; j++) {
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) ||
                (arr[j] >= arr[i] && arr[j] <= dep[i])) {
                count++;
            }
        }
        ans = max(ans, count);
    }
    return ans;
}

int main() {
    vector<int> arr = {900, 945, 955, 1100, 1500, 1800};
    vector<int> dep = {920, 1200, 1130, 1150, 1900, 2000};
    int n = arr.size();

    cout << "Min number of platforms required: " << findPlatform(n, arr, dep);
    return 0;
}