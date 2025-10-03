#include<bits/stdc++.h>
using namespace std;
int countprime(int n){
    vector<bool> isprime(n,true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<n;i++){
        if(isprime[i]){
            for(int j=i * i;j<n;j+=i){
                isprime[j]=false;
            }
        }
    }
    int count=0;
    for(int i=2;i<n;i++){
        if(isprime[i]) count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number = ";
    cin>>n;
    cout<<endl;
    cout<<"no. of prime factors of the given number are = "<<countprime(n);
    return 0;
}