#include<bits/stdc++.h>
using namespace std;
int Kdistinct(string &s,int k){
    int n=s.size(),maxlen=0;
    int l=0,r=0;
    unordered_map<char,int> mp;
    while(r<n){
        mp[s[r]-'a']++;
        while(mp.size()>k){
            mp[s[l]-'a']--;
            l++;
        }
        if(mp.size()<=k){
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
    return maxlen;
}
int main(){
    string s="aaabbccd";
    cout<<Kdistinct(s,2);
    return 0;
}