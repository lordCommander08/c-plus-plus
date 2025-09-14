#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=0;
    int remainder=0;
    cout<<"enter a number: ";
    cin>>n;
    int pow=1;
    while(n!=0)
    {
        remainder=n%2;
        n=n/2;
        a=a+(remainder*pow);
        pow=pow*10;
    }
    cout<<a;
}