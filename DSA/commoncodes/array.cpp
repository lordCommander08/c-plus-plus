#include<iostream>
using namespace std;
int main()
{
    int arr[5],i;
    cout<<"enter the array elements: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"array elemnts are: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int min=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"min value is: "<<endl;
    cout<<min;
    cout<<endl;
    cout<<"size of array is: " <<sizeof(min);
    cout<<
}