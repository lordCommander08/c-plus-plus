#include<bits/stdc++.h>
using namespace std;
string convert(string num){
    string res="";
    int n=num.length();
    for(int i=0;i<n;i++){
        if(num[i]=='1') res+='0';
        else if(num[i]=='0') res+='1';
    }
    int carry=1;
    for(int i=n-1;i>=0;i--){
        if(res[i]=='1' && carry==1){
            res[i]='0';
        }
        else if(res[i]=='0' && carry==1){
            res[i]='1';
            carry=0;
        }
    }
    return res;
}

int main(){
    string s="1010";
    cout<<convert(s);
    return 0;
}