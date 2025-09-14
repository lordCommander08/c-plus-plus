#include<iostream>
using namespace std;
int change(int arr[])
{
    arr[2]=99;
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[10];
    cout<<"array element are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    change(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}