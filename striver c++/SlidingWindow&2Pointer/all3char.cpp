#include<bits/stdc++.h>
using namespace std;
int all3char(string &s){
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++){
        vector<int> mp(3,0);
        for(int j=i;j<n;j++){
            mp[s[j]-'a']=1;
            if(mp[0]+mp[1]+mp[2]==3){
                count++;
            }
        }
    }
    return count;
}
int main(){
    string s="bbacba";
    cout<<all3char(s);
}