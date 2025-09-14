#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a: ";
    cin>>a;
    int b;
    cout<<"enter b: ";
    cin>>b;
    cout<<"before swapping"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"after swapping"<<endl;
    int swap;
    swap=a;
    a=b;
    b=swap;
    cout<<a<<endl;
    cout<<b<<endl;
}