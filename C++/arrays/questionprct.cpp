#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[10];
    cout<<"array element are:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
       if(arr[i]%2==0)
       {
        arr[i]=arr[i]+10;
       }
       else
       {
        arr[i]=arr[i]*2;
       }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}