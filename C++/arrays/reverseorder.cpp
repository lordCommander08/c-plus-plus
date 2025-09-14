#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    int b[5];
    for(int i=0;i<5;i++)
    {
        int j=5-1-i;
        b[i]=a[j];
    }
    for(int i=0;i<5;i++)
    {
        cout<<endl;
        cout<<b[i]<<" ";
    }
}