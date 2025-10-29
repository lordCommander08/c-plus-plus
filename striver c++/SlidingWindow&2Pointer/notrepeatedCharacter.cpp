#include<bits/stdc++.h>
using namespace std;
int LongestSub(string &s){
    int n=s.size();
    if(n==0) return 0;
    int maxlen= 0;
    int l=0,r=0;
    vector<int> mp(256,-1);
    while(r<n){
        if(mp[s[r]]!=-1){
            if(mp[s[r]]>=l){
                l=mp[s[r]]+1;
            }
        }
        int len = r-l+1;
        maxlen=max(maxlen,len);
        mp[s[r]]=r;
        r++;
    }
    return maxlen;
}
int main(){
    cout<<"Enter the string: ";
    string s;
    cin>>s;
    cout<<LongestSub(s);
    return 0;
}