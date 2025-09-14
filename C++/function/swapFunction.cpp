#include<iostream>
using namespace std;
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
}
int main()
{
    int c;
    cout<<"enter c: ";
    cin>>c;
    int d;
    cout<<"enter d: ";
    cin>>d;
    swap(c,d);
}
