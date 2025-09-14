// #include<iostream>
// using namespace std;
// void print(int x,int n)
// {
//     if(x>n) return;
//     cout<<x<<endl;
//     print(x+1,n);
// }
// int main()
// {
//     int n;
//     cout<<"enter n = ";
//     cin>>n;
//     print(1,n);
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=8,b=12;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            cout<<i;
            break;
        }
    }
}