#include<iostream>
using namespace std;
int main()
{
    int a;
    int sum=0;
    int n;
    cout<<"enter the number = ";
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout<<sum;
    }