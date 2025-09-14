#include<iostream>
using namespace std;
int main()
{
    int a[10][10];
    int m,n;
    cout<<"enter row: ";
    cin>>m;
    cout<<endl;
    cout<<"enter column: ";
    cin>>n;
    cout<<"enter the elments:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }        
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        } 
        cout<<endl;     
    }
}