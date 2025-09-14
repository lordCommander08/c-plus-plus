#include<iostream>
using namespace std;
int main()
{
    int a[50],i,n,flag=0,item;
    cout<<"enter the limit of the array: ";
    cin>>n;
    cout<<"enter the elements in the array: ";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    } 
    cout<<"enter the element to be search: ";
    cin>>item;
    for(int i=1;i<=n;i++)
    {
        if(item==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"search is successfull: "<<endl;
        cout<<i;
        cout<<item;
    }
    else
    {
        cout<<"search is unsuccessfull";
    }
}