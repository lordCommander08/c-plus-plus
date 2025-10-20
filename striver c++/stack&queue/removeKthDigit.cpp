#include <bits/stdc++.h>
using namespace std;

string removeKthDigit(string num, int k) {
    stack<char> st;

    for (int i = 0; i < num.size(); i++) {
        while (!st.empty() && k > 0 && st.top() > num[i]) {
            st.pop();
            k--;
        }
        st.push(num[i]);
    }

    // If still have digits to remove
    while (k > 0 && !st.empty()) {
        st.pop();
        k--;
    }

    // Build result string
    string res = "";
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());

    // Remove leading zeros
    while (!res.empty() && res[0] == '0') {
        res.erase(res.begin());
    }

    // If result becomes empty
    return res.empty() ? "0" : res;
}

int main() {
    string s = "42136";
    int k = 2;
    cout << removeKthDigit(s, k);
}