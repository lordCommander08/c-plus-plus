#include <bits/stdc++.h>
using namespace std;

int maxsum(vector<int>& arr) {
    int count = 0;
    if (arr[0] > arr[arr.size() - 1]) {
        for (int i = 0; i < arr.size() - 1; i++) {
            count += arr[i];
        }
    } else if (arr[0] < arr[arr.size() - 1]) {
        for (int i = 1; i < arr.size(); i++) {
            count += arr[i];
        }
    } else {
        for (int i = 0; i < arr.size() -1; i++) {
            count += arr[i];
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 1};
    int b = maxsum(arr);
    cout << "maxarray sum is: " << b;
    return 0;
}
