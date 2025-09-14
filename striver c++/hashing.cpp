#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout<<"enter the size of the array:";
    cin >> n;
    int arr[n];
    cout<<"enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    cout<<"using hash table:";
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}