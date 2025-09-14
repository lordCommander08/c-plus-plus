#include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
using namespace std;
int main(){
    string s = "my name is Deependra Gurjar";
    int n = s.length();
    reverse(s.begin(), s.end());
    string ans ="";
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+= s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        ans+=word+" ";
    }
    ans.pop_back(); // Remove the trailing space
    cout<<ans;
    return 0;
}