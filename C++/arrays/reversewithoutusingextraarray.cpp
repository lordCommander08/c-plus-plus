#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"enter array elements: ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int b[5];
    int i=0;
    int j= 5-1;
    while(i<j)
    {
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}