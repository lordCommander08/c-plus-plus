#include<bits/stdc++.h>
using namespace std;
void subset(string &s,int index,int n,vector<string> &ans,string &temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    subset(s,index+1,n,ans,temp);
    temp.push_back(s[index]);
    subset(s,index+1,n,ans,temp);
    temp.pop_back();
}
int main(){
    string s="abc";
    vector<string> ans;
    string temp;
    subset(s,0,s.size(),ans,temp);
        for(string a:ans){
            cout<<a<<" ";
            cout<<endl;
        }
    return 0;
}