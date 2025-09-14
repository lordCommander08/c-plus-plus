#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcde";
    string t = "cdeab";
    int n = s.size();

    if (s.length() != t.length()) {
        cout << "false";
        return 0;
    }

    // string original = s; // keep original
    // for (int i = 0; i < n; i++) {
    //     rotate(s.begin(), s.begin() + 1, s.end()); // rotate by 1 step
    //     if (s == t) {
    //         cout << "true";
    //         return 0;
    //     }
    // }
    // optimal  solution
    if((s + s).find(t) != string::npos) {
        cout << "true";
        return 0;
    }

    cout << "false";
    return 0;
}
