#include<bits/stdc++.h>
using namespace std;
string postfixtoInfix(string s){
    int i=0;
    stack<string> st;
    while(i<s.size()){
    if(s[i]>='A' && s[i]<='Z'  || s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
        st.push(string(1,s[i]));
    }
    else{
        string t1=st.top();
        st.pop();
        string t2=st.top();
        st.pop();
        string x = '(' +t2+s[i]+t1+')';
        st.push(x);
    }
    i++;
}
    return st.top();
}
int main(){
    string s="AB-DE+F*/";
    cout<<"postfix to infix of"<<s<<" = ";
    cout<<postfixtoInfix(s);
    return 0;
}