#include<iostream>
using namespace std;
int main()
{
    int a;
    int product=1;
    int n;
    cout<<"enter the number = ";
    cin>>n;
    while(n!=0)
    {
        if(n%2==0)
        {
        a=n%10;
        product=product*a;
        n=n/10;}
    }
    cout<<product;
}