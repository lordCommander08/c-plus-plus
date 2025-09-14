#include<iostream>
using namespace std;
int sum(int a)
{
    int z=0;
    while(a!=0)
    {
        int lastdigit = a%10;
        z=z+lastdigit;
        a=a/10;
    }
    return z;
}
int main()
{
    int c;
    cout<<"enter c: ";
    cin>>c;
    cout<< sum(c);
}