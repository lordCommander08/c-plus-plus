#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    if(n==0 || n==1){
        cout<<1;
    }
    else{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    }
}