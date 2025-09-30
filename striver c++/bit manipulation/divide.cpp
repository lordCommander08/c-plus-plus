#include<bits/stdc++.h>
using namespace std;
int main(){
    int divisor;
    int dividend;
    cout<<"enter the divisor = ";
    cin>>divisor;
    cout<<endl;
    cout<<"enter the dividend = ";
    cin>>dividend;
    if(divisor==1){
        cout<<dividend;
    }
    if(dividend==INT_MAX){
        cout<<INT_MAX;
    }
    int count=0,sum=0;
    while(sum+divisor<=dividend){
        count=count+1;
        sum+=divisor;
    }
    cout<<"answer is = "<<count;
    return 0;
}