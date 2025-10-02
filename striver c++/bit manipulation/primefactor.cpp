#include<bits/stdc++.h>
using namespace std;
// bool  isprime(int n){
//     if(n<=1) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// int main(){
//     cout<<"enter a number = ";
//     int n;
//     cin>>n;
//     vector<int> list;
//     for(int i=2;i<=n;i++){
//         if(n%i==0){
//             if(isprime(i)){
//                 list.push_back(i);
//             }
//         }
//     }
//     for(auto it:list){
//         cout<<it<<" ";
//     }
//     return 0;
// }
int main(){
    cout<<"enter a number = ";
    int n;
    cin>>n;
    vector<int> ans;
    for(int i=2;i<=n;i++){
        if(n%i==0) ans.push_back(i);
        while(n%i==0){
            n=n/i;
        }
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}