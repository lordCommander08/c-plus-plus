#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> str = {"club","clube","clubdding","clubtter","clubstered"};
    if(str.empty()) return 0;
    sort(str.begin(),str.end());
    string first = str.front();
    string last = str.back();
    int i=0;
    while(i<first.size() && i<last.size() && first[i]==last[i]){
        i++;
    }   
    string ans = first.substr(0, i);
    cout << ans;
    return 0;
}