#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int c;
    int n;
    cout<<"enter the limit of the series: ";
    cin>>n;
    for(int i=0;i<=n-2;i++){
         c=a+b;
         a=b;
         b=c;
    }
    cout<<b;
    return 0;
}