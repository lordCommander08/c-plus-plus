#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="deependra";
    map<char,int> m;
    for(char ch : s){
        m[ch]++;
    }
    for(auto &p : m){
        cout<<p.first<<" : "<<p.second<<endl;
    }

}