#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int target;
    int arr[5]={1,5,9,11,32};
    cout<<"enter the target: ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<":";
                cout<<arr[j];
            }
        }
    }
}