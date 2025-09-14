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
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + arr[i];
        cout<<sum<<" ";
    }
}