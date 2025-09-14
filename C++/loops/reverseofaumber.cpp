#include<iostream>
using namespace std;
int main()
{
    int n;
    int num;
    n=num;
    cout<<"enter the value of n = ";
    cin>>n;
    int r=0,remainder;
    while(n!=0)
    {
        remainder=n%10;
        r=r*10+remainder;
        n=n/10;
    }
    cout<<r<<endl;
}