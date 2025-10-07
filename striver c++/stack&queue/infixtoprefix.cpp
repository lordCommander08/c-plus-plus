#include<bits/stdc++.h>
using namespace std;
class helper{
    int i=0;
    stack<char> st;
    string ans="";
    int priority(char c){
        if(c=='^') return 3;
        else if(c=='*' || c=='/') return 2;
        else if(c=='+' || c=='-') return 1;
        else return 0;
    }
    public:
        string infixtoPrefix(string &s){
            i=0;
            while(i<s.size()){
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'||s[i]>='0' && s[i]<='9' ){
            ans+=s[i];
        }
            else if(s[i]==')') st.push(s[i]);
            else if(s[i]=='('){
                while(!st.empty() && st.top()!=')'){
                    ans+=st.top();
                    st.pop();
                }
                if(!st.empty()) st.pop();
            }
            else{
                while(!st.empty() && priority(s[i])<priority(st.top())){
                    ans+=st.top();
                    st.top();
                }
                st.push(s[i]);
            }
            i++;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
int main(){
    string s="(A+B)*C-D+F";
    helper h;
    cout<<"infix to Prefix of "<<s<<" = ";
    reverse(s.begin(),s.end());
    string x=h.infixtoPrefix(s);
    reverse(x.begin(),x.end());
    cout<<x;
    return 0;
}