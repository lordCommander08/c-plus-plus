#include<iostream>
using namespace std;
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
    int mx= arr[0];
    for(int i=0;i<n;i++)
    {
       if(mx<arr[i])
        {mx=arr[i];}
    }
    cout<<"first largest no: "<<mx;
    int slarge;
     slarge = arr[0];
   for(int i=0; i<n; i++)
   {
      if(slarge<arr[i])
      {
         if(arr[i]!=mx)
            slarge = arr[i];
      }
   }
   cout<<"\nSecond Largest Element = "<<slarge; 
}