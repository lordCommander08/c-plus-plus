#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int n;
    cout<<" enter the limit of the gp = ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a=a*4;
    }
}