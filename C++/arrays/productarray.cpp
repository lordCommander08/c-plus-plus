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
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p =p * arr[i];
        cout<<p<<" ";
    }
}