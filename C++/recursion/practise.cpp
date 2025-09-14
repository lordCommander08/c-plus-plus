#include<bits/stdc++.h>
using namespace std;
void print(int a,int n){
    if(a>n) return;
    cout<<a<<endl;
    print(a=a+1,n);
}
int main(){
    int n;
    cout<<"enter the limit:";
    cin>>n;
    print(1,n);
}