#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int temp=n;
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    if(temp==0) cout<<1;
    else{
    cout<<"the number of digits is= "<<count;
    }
    return 0;
}