#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the 1st number :"<<endl;
    cin>>a;
    int b;
    cout<<"enter the 2nd number :"<<endl;
    cin>>b;
    int c;
    cout<<"enter the 3rd number :"<<endl;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"a is greater";
    }
    if(b>c && b>a)
    {
        cout<<"b is greater";
    }
    if(c>b && c>a)
    {
        cout<<"c is greater ";
    }
    else
    {
        cout<<"two number or may be all the 3 numbers will be same";
    }
}