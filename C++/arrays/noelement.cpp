#include<iostream>
using namespace std;
int main()
{
    int x=4;
    int count=0;
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
      if(arr[i]>x)
      {
        count++;
      }
    }
    cout<<count;
    }