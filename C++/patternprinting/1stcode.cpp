#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the limit of the pattern = ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j%2==0)
            {
             cout<<(char)(j+64)<<" ";
            }
            else if(j%2!=0)
            {
              cout<<j ;
            }
        }
         cout<<endl;
    }
}