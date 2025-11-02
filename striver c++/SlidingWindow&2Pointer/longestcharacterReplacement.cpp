#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string s,int k){
    int n=s.size();
    int maxlen=0;
    for(int i=0;i<n;i++){
        vector<int> count(26,0);
        int maxf=0;
        for(int  j=i;j<n;j++){
            count[s[j]-'A']++;
            maxf=max(maxf,count[s[j]-'A']);
            int changes=(j-i+1)-maxf;
            if(changes<=k){
                maxlen=max(maxlen,j-i+1);
            }
            else break;
        }
    }
    return maxlen;
}
int main(){
    string s="AAABABBABAA";
    cout<<characterReplacement(s,2);
    return 0;
}