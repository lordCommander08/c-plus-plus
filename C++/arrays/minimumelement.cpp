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
    cout<<endl;
    int min = arr[0];
    for(int i=1;i<=n;i++)
    {
       if(min>arr[i])
        {min=arr[i];}
    }
    cout<<min;
}