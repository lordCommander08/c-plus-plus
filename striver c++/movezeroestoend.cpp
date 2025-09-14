#include <bits/stdc++.h>
using namespace std;

void removezeroes(int arr[], int n) {
    vector<int> temp;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    int a = temp.size();
    for (int i = 0; i < a; i++) {
        arr[i] = temp[i];
    }

    for (int i = a; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int arr[] = {1, 0, 4, 0, 2, 0, 5};
    int n = 7;

    removezeroes(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
