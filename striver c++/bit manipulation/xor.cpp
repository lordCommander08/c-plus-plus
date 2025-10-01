#include<bits/stdc++.h>
using namespace std;
int findxor(int n){
    if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if((n%4==3)) return 0;
    else return n;
}
int main(){
    int left=7, right=17;
    int a = findxor(left-1) ^ findxor(right);
    cout<<a;
}