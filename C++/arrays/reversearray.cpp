#include<iostream>
using namespace std;
int main()
{
    int a[5],i,n;
    cout<<"enter elements in array: ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"array is"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    cout<<"reverse array:"<<endl;
    for(i=4;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}