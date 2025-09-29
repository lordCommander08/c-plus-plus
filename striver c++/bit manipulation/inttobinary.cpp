// #include<bits/stdc++.h>
// using namespace std;
// string convert(int num){
//     if(num==0) return "0";
//     string ans="";
//     while(num>0){
//         if(num%2==0) ans+="0";
//         else ans+="1";
//         num=num/2;
//     }
//     reverse(ans.begin(),ans.end());
//     return (ans);
// }
// int main(){
//     int n=10;
//     cout<<convert(n);
//     return 0;
// }
// binary to integer
#include<bits/stdc++.h>
using namespace std;
int convert(string num){
    int res=0;
    int n=num.length();
    for(int i=0;i<n;i++){
    int bit=num[n-1-i]-'0';
        res += bit * (1 << i);
    }
    return res;
}
int main(){
    string s="1110";
    cout<<convert(s);
    return 0;
}