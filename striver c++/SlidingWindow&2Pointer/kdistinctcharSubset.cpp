#include<bits/stdc++.h>
using namespace std;
int Kdistinct(string &s,int k){
    int n=s.size(),maxlen=0;
    if(n<=0) return 0;
    int l=0,r=0;
    unordered_map<char,int> mp;
    while(r<n){
        mp[s[r]]++;
        if(mp.size()>k){
            mp[s[l]]--;
            if(mp[s[l]]==0) mp.erase(s[l]);
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