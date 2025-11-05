#include<bits/stdc++.h>
using namespace std;
string WindowS(string &s,string &t){
     int n = s.size(), m = t.size();
        if (m > n) return "";

        int minlen = 1e9;
        int sindex = -1;

        unordered_map<char, int> mp;
        for (int i = 0; i < m; i++) {
            mp[t[i]]++;
        }

        int l = 0, r = 0;
        int count = 0;
        int required = m;

        while (r < n) {
            if (mp[s[r]] > 0)
                count++;
            mp[s[r]]--;

            while (count == required) {
                if (r - l + 1 < minlen) {
                    minlen = r - l + 1;
                    sindex = l;
                }
                mp[s[l]]++;
                if (mp[s[l]] > 0)
                    count--;
                l++;
            }
            r++;
        }

        if (sindex == -1) return "";
        return s.substr(sindex, minlen);
}
int main(){
    string s="ddaaabbca";
    string t="abc";
    cout<<WindowS(s,t);
}