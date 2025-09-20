#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1) return 1;
    return n*n*n+ sum(n-1);
}
int  main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<sum(n);
}