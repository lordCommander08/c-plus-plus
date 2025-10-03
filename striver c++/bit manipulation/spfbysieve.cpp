#include<bits/stdc++.h>
using namespace std;
vector<int> spfbysieve(int n){
    vector<int> spf(n+1);
    for(int i=0;i<=n;i++){
        spf[i]=i;
    }
    spf[0]=0,spf[1]=1;
    for(int i=2;i*i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    return spf;
}
int main(){
    cout<<"enter a number = ";
    int n;
    cin>>n;
    vector<int> spf;
    spf=spfbysieve(n);
    for(auto it : spf){
        cout<<it<<" ";
    }
    return 0;
}