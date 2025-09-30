#include<bits/stdc++.h>
using namespace std;
string convert(int num){
    if(num == 0) return "0";
    string ans = "";
    while(num > 0){
        ans += (num % 2 == 0 ? '0' : '1');
        num /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
cout<<"Enter a number = ";
int n;
cin>>n;
string x = convert(n);
cout<<"Binary form = "<<x<<endl;
int count=0;
for(int i=0;i<x.length();i++){
    if(x[i]=='1') count++;
}
cout<<"no of set bits= "<<count;
return 0;
}