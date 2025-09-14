#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0) return 1;
    return a * power(a,b-1);
}
int main()
{
    int a;
    cout<<"enter a: "<<endl;
    cin>>a;
    int b;
    cout<<"enter b: "<<endl;
    cin>>b;
   cout<<power(a,b);
}