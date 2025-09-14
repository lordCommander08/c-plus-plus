#include <bits/stdc++.h>
using namespace std;

int func(int mid, int n, int m) {
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        ans = ans * mid;
        if (ans > m) return 2; // mid^n > m
    }
    if (ans == m) return 1; // mid^n == m
    return 0;               // mid^n < m
}

int nthroot(int n, int m) {
    int low = 1, high = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midn = func(mid, n, m);

        if (midn == 1) return mid;       // Found exact root
        else if (midn == 0) low = mid+1; // mid^n < m
        else high = mid-1;               // mid^n > m
    }
    return -1; // No integer nth root exists
}

int main() {
    int n, m;
    cout << "Enter the root degree (n): ";
    cin >> n;
    cout << "Enter the number (m): ";
    cin >> m;

    int ans = nthroot(n, m);
    if (ans == -1) cout << "No integer " << n << "th root exists for " << m << endl;
    else cout << "The " << n << "th root of " << m << " is " << ans << endl;

    return 0;
}
