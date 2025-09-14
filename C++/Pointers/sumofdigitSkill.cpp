#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int r;
    int n;
    cout<<"enter the number: ";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        a=a+r;
        n=n/10;
    }
    cout<<"the sum of the digits of the entered  number is: "<<a;
    return 0;
}