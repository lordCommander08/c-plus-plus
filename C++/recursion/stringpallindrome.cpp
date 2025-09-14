// #include<bits/stdc++.h>
// using namespace std;
// bool f(int i,string &s){
//     if(i>=s.size()/2) return true;
//     if(s[i]!=s[s.size()-i-1]) return false;
//     return f(i+1,s);
// }
// int main(){
//     string s="madam";
//     cout<<f(0,s);
// }

// fibonacci series
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==1 || n==2) return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
int n;
cin>>n;
cout<<fib(n);
}