#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string &s,int i,int j){
    if(i>=j) return true;
    if(s[i]==s[j]) return ispalindrome(s,i+1,j-1);
    else return false;
}

int main(){
    string s="abclevela";
    int n = s.size();
    int count=0;
    int result=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(ispalindrome(s,i,j)){
                if(j-i+1 > count) {
                    count = j-i+1;
                    result = i;
                }
            }
        }
    }

    cout << s.substr(result,count);
    return 0;
}
