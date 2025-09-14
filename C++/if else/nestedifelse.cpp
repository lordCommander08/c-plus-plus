#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value of a\n";
    cin>>a;
    int b;
    cout<<"enter the value of b\n";
    cin>>b;
    int c;
    cout<<"enter the value of c\n";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greatest";
        }
        else{
            cout<<"c is greatest";
        }
    }
    else{
        if(b>c)
        {
            cout<<"b is greatest";
        }
        else{
            cout<<"c is greatest";
        }
    }
}