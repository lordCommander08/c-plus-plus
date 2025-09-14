#include<iostream>
using namespace std;
int main()
{
    int r;
    int a;
    cout<<"enter the value of a\n";
    cin>>a;
    int b;
    cout<<"enter the value of b\n";
    cin>>b;
    char op;
    cout<<"enter any operator\n";
    cin>>op;
    switch (op)
    {
    case '+': r = a + b ;
     cout<<r;
     break;
    case '-': r =a-b;
     cout<<r;
       break;
    case '*': r = a * b ;
     cout<<r;
       break;
    case '/': r = a / b ;
     cout<<r;
       break;
    case '%': r = a % b ;
     cout<<r;
       break;
     default :cout<<"wrong statement";
    }
   
}