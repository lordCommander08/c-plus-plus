#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int* a=&x;
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<x<<endl;;
    *a=4;
    cout<<*a<<endl;
    cout<<a<<endl;
}