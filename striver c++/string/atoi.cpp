#include<bits/stdc++.h>
using namespace std;
isatoi(string s){
    int n=s.size();
    int result=0;
    int i=0;
    int sign=1;
    //1. skip the spaces
    while(i<n && s[i]==' '){
        i++;
    }
    //2. check for sign
    if(i<n && (s[i]=='+'||s[i]=='-')){
        sign = (s[i]=='-') ? -1:1;
        i++;
    }
    //3. convert the number and avoid overflow
    while(i<n && isdigit(s[i])){
        int digit = s[i]-'0';
        result=result*10 + digit;
        if(sign==1 && result> INT_MAX) return INT_MAX;
        if(sign=='-' && -result<INT_MIN) return INT_MIN;
        i++;
    }
    return sign*result;
}
int main(){
    string s = "   -00423";
    cout<<isatoi(s);
    return 0;
}