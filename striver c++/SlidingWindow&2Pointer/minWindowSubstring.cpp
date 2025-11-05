#include<bits/stdc++.h>
using namespace std;
string WindowS(string &s,string &t){
    int n=s.size(),m=t.size();
    int minlen=1e9;
    int sindex=-1;
    for(int i=0;i<n;i++){
        unordered_map<char,int> mp;
        for(int j=0;j<m;j++) mp[t[j]]++;
        int count=0;
        for(int j=i;j<n;j++){
            if(mp[s[j]]>0) {
                count=count+1;
            }
            mp[s[j]]--;
            if(count==m){
                if(j-i+1 < minlen){
                    minlen=j-i+1;
                    sindex=i;
                }
                break;
            }
        }
    }
    if(sindex==-1) return "";
    return s.substr(sindex,minlen);
}
int main(){
    string s="ddaaabbca";
    string t="abc";
    cout<<WindowS(s,t);
}